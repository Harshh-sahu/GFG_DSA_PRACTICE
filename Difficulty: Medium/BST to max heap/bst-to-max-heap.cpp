// User function Template for C++

/*struct Node {
    int data;
    Node *left, *right;
};*/
class Solution {
  public:
  
  void storeInorderTraversal(Node* root, vector<int>& in) {
      if (root == NULL) return;
      storeInorderTraversal(root->left, in);
      in.push_back(root->data);
      storeInorderTraversal(root->right, in);
  }

  void replaceUsingPostOrder(Node* root, vector<int>& in, int& index) {
      if (root == NULL) return;

      replaceUsingPostOrder(root->left, in, index);
      replaceUsingPostOrder(root->right, in, index);

      // Replace current node value and increment index
      root->data = in[index++];
  }

  void convertToMaxHeapUtil(Node* root) {
      vector<int> inorder;
      storeInorderTraversal(root, inorder);
      int index = 0;
      replaceUsingPostOrder(root, inorder, index);
  }
};



