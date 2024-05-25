//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:    int nodecount(struct Node* root) {
        if (root == nullptr) return 0; // Base case
        int l = nodecount(root->left);
        int r = nodecount(root->right);
        return 1 + l + r;
    }
    
    bool isCBT(struct Node* root, int i, int n) {
        if (root == nullptr) return true; // Base case
        if (i >= n) return false;
        return isCBT(root->left, 2 * i + 1, n) && isCBT(root->right, 2 * i + 2, n);
    }

    bool isMaxOrder(struct Node* root) {
        if (root == nullptr) return true; // Base case

        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);
        bool ans = false;

        if (root->left == nullptr && root->right == nullptr) {
            ans = true;
        } else if (root->left != nullptr && root->right == nullptr) {
            ans = root->data > root->left->data;
        } else if (root->left != nullptr && root->right != nullptr) {
            ans = root->data > root->left->data && root->data > root->right->data;
        }

        return ans && left && right;
    }
    
    bool isHeap(struct Node* tree) {
        int n = nodecount(tree);
        int i = 0; // Root node index is 0
        return isCBT(tree, i, n) && isMaxOrder(tree);
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
// } Driver Code Ends