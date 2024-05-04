//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:

    Node* fun(int in[], int post[], int l, int r, int k){
        if(l>r) return NULL;
        if(l==r){
            return new Node(in[l]);
        }
        int m=-1;
        while(k>=0){
            for(int i=l;i<=r;i++){
                if(in[i]==post[k]){
                    m=i;
                    break;
                }
            }
            if(m!=-1) break;
            k--;
        }
        Node *res=new Node(in[m]);
        res->left=fun(in, post, l, m-1, k-1);
        res->right=fun(in, post, m+1, r, k-1);
        
        return res;
    }
    
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        return fun(in, post, 0, n-1, n-1);
    }
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends