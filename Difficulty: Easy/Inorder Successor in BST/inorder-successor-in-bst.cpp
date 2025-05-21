/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int inOrderSuccessor(Node *root, Node *x) {
    Node* succ = nullptr;
    Node* curr = root;

    while (curr) {
        if (curr->data > x->data) {
            succ = curr;           // Potential successor
            curr = curr->left;     // Try to find a smaller one
        } else {
            curr = curr->right;    // Move right to find a greater value
        }
    }

    return succ ? succ->data : -1; // Return -1 if no successor exists
}

};