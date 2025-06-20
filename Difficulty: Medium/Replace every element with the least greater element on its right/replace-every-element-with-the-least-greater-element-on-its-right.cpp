//Back-end complete function Template for C++
   class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) : data(val), left(0), right(0) {}
};

class Solution {
public:
    Node* insert(Node* root, int val, int& succ) {
        if (!root) return new Node(val);

        if (val >= root->data) {
            root->right = insert(root->right, val, succ);
        } else {
            succ = root->data;
            root->left = insert(root->left, val, succ);
        }
        return root;
    }

    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int> ans(n); // fixed the size
        Node* root = 0;

        for (int i = n - 1; i >= 0; --i) {
            int succ = -1;
            root = insert(root, arr[i], succ);
            ans[i] = succ;
        }

        return ans;
    }
};
