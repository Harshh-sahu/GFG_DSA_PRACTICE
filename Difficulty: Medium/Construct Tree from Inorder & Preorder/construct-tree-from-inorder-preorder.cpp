//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Definition of the Node class
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// Function to print the tree in postorder traversal
void printPostOrder(Node *root) {
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}


// } Driver Code Ends
// Class that contains the logic to build the binary tree
/*
Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    // create Mapping
    void creatingMapping(vector<int>&inorder, map<int, int>&indexMapping, int n){
        for(int i=0; i<n; i++){
            indexMapping[inorder[i]] =i;
        }
    }
    // build treee
    Node* solve(vector<int> &inorder, vector<int> &preorder, int &index, int inorderStart, int inorderEnd, map<int, int>&indexMapping, int n){
        //base case
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        
        int element = preorder[index++];
        Node* root = new Node(element);
        int position = indexMapping[element];
        
        // left call to solve
        root->left = solve(inorder, preorder, index, inorderStart, position-1, indexMapping, n);
        // right call to solve 
        root->right = solve(inorder, preorder, index, position+1, inorderEnd, indexMapping, n);
        
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // Code here
        int n = inorder.size();
        int preOrderIndex = 0;
        map<int, int>indexMapping;
        // creating mapping of inorder index
        creatingMapping(inorder, indexMapping, n);
        //build tree
        Node* ans = solve(inorder, preorder, preOrderIndex, 0, n-1, indexMapping, n);
        return ans;
    }

};

//{ Driver Code Starts.

// Main function where the test cases are handled
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> inorder, preorder;

        // Input the inorder traversal
        string input;
        getline(cin, input);
        stringstream ss1(input);
        int num;
        while (ss1 >> num)
            inorder.push_back(num);

        // Input the preorder traversal
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> num)
            preorder.push_back(num);

        // Create Solution object and build the tree
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder);

        // Print the postorder traversal of the constructed tree
        printPostOrder(root);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends