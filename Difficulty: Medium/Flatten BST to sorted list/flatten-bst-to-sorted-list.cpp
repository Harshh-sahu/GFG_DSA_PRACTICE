// User function Template for C++

/* Node of the binary search tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
     void inorder(Node* root,Node* &prev){
         if(!root)return;
         
         inorder(root->left,prev);
      prev->left = 0;
      prev->right = root;
      prev = root;
         inorder(root->right,prev);
     }
    Node *flattenBST(Node *root) {
    
        Node* dummy = new Node(-1);
        Node* prev = dummy;
        
        inorder(root,prev);
    
       prev->left = prev->right = 0;
         root = dummy->right;
    
        return root;
    }
};