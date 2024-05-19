//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    
public:

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* bstUsingInorder(vector<int>&inorder,int s ,int e){
    //base case
    if(s >e)return NULL;
     
     int mid = (s+e)/2;
     int element = inorder[mid];
     Node* root = new Node(element);
     //recursion sambhal lega
     root->left = bstUsingInorder(inorder,s,mid-1);
     root->right = bstUsingInorder(inorder,mid+1,e);
     return root;

}

vector<int>ans;
void preorder(Node *root)
{

    // NLR
    if (root == NULL)
        return;

    ans.push_back(root->data);
    preorder(root->left);
    preorder(root->right);
}



    vector<int> sortedArrayToBST(vector<int>& nums) {
       
Node* root = bstUsingInorder(nums,0,nums.size()-1);
 preorder(root);
       
       return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends