//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:

    /*You are required to complete below function */
    int merge(vector<int>&A, int start, int mid, int end){
        vector<int>left(mid - start + 1), right(end - mid);
        for(int i = start; i <= mid; i++){
            left[i-start] = A[i];
        }
        for(int i = mid + 1; i <= end; i++){
            right[i-mid-1] = A[i];
        }
        int i = 0, j = 0, k = start, cnt = 0;
        while(i < left.size() && j < right.size()){
            if(left[i] >= right[j]){
                cnt += left.size() - i;
                A[k++] = right[j++];
            }
            else{
                A[k++] = left[i++];
            }
        }
        while(i < left.size()){
            A[k++] = left[i++];
        }
        while(j < right.size()){
            A[k++] = right[j++];
        }
        return cnt;
    }
    int divide(vector<int>& A, int start, int end){
        if(start >= end){
            return 0;
        }
        int mid = start + (end - start) / 2, val = 0;
        val += divide(A, start, mid);
        val += divide(A, mid + 1, end);
        val += merge(A, start, mid, end);
        return val;
    }
    void traverse(Node* root, vector<int>& A){
        if(!root){
            return;
        }
        traverse(root->left, A);
        A.push_back(root->data);
        traverse(root->right, A);
    }
    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
        vector<int>A;
        traverse(root, A);
        return divide(A, 0, n-1);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends