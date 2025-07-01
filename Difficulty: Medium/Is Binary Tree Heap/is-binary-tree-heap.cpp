// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
  
  int nodeCount(Node* root) {
    if (!root) return 0;
    return 1 + nodeCount(root->left) + nodeCount(root->right);
}

// Check if tree is complete binary tree (0-based indexing)
bool isCBT(Node* root, int index, int totalNodes) {
    if (!root) return true;
    if (index >= totalNodes) return false;
    return isCBT(root->left, 2 * index + 1, totalNodes) &&
           isCBT(root->right, 2 * index + 2, totalNodes);
}

// Check max-heap property
bool isMaxOrder(Node* root) {
    if (!root) return true;

    // Leaf node
    if (!root->left && !root->right) return true;

    // Only left child
    if (root->left && !root->right)
        return root->data >= root->left->data && isMaxOrder(root->left);

    // Both children present
    if (root->left && root->right)
        return root->data >= root->left->data &&
               root->data >= root->right->data &&
               isMaxOrder(root->left) &&
               isMaxOrder(root->right);

    // If right child exists without left child – invalid in CBT
    return false;
}

// Final function to check if binary tree is a heap
bool isHeap(Node* tree) {
    int totalNodes = nodeCount(tree);
    return isCBT(tree, 0, totalNodes) && isMaxOrder(tree);
}
};