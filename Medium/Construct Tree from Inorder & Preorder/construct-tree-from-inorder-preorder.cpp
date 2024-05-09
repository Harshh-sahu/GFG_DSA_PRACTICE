//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
   void createMapping(int in[],map<int,vector<int> >&nodeToIndex,int n){
        for(int i=0;i<n;i++){
           nodeToIndex[in[i]].push_back(i);
        }
        for(auto &it : nodeToIndex){
            reverse(it.second.begin(),it.second.end());
        }
    }

Node *solve(int in[],int pre[],int &index,int start,int end,int n,
                map<int,vector<int> >&nodeToIndex){
                    
                    if( index >= n || start > end){
                        return NULL;
                    }
                    
                    int element=pre[index++];
                    Node *root=new Node(element);
                    
                    int pos=nodeToIndex[element].back();
                    nodeToIndex[element].pop_back();
                    
                    
                    root->left=solve(in,pre,index,start,pos-1,n,nodeToIndex);
                    root->right=solve(in,pre,index,pos+1,end,n,nodeToIndex);
                    
                    return root;
                }

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int pre[], int n) {
    // Your code here
    int preIndex=0;
    map<int,vector<int> > nodeToIndex;
    
    createMapping(in,nodeToIndex,n);
    
    Node *ans=solve(in,pre,preIndex,0,n-1,n,nodeToIndex);
    return ans;
}
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends