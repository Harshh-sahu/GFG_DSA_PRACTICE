/*
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
    // Function to return a list of integers denoting the node
vector<int> merge(Node *root1, Node *root2) {
    vector<int> ans;

    stack<Node*> sa, sb;
    Node* a = root1;
    Node* b = root2;

    // Traverse both trees in-order simultaneously
    while (a || b || !sa.empty() || !sb.empty()) {
        // Go left in both trees as far as possible
        while (a) {
            sa.push(a);
            a = a->left;
        }
        while (b) {
            sb.push(b);
            b = b->left;
        }

        // Decide whether to take element from tree A or tree B
        if (sb.empty() || (!sa.empty() && sa.top()->data <= sb.top()->data)) {
            Node* atop = sa.top(); sa.pop();
            ans.push_back(atop->data);
            a = atop->right; // move to right subtree
        } else {
            Node* btop = sb.top(); sb.pop();
            ans.push_back(btop->data);
            b = btop->right; // move to right subtree
        }
    }

    return ans;
}

};