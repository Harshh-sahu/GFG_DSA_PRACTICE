//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
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
//Function to count number of nodes in BST that lie in the given range.
class Solution {
public:
    int getCount(Node *root, int low, int high) {
        if (!root) return 0;  // Base case: If the node is null, return 0

        // Check if the current node is within the range
        if (root->data >= low && root->data <= high) {
            // Count this node and recurse for both left and right subtrees
            return 1 + getCount(root->left, low, high) + getCount(root->right, low, high);
        } 
        else if (root->data < low) {
            // If current node's data is less than low, recurse for the right subtree
            return getCount(root->right, low, high);
        } 
        else {
            // If current node's data is greater than high, recurse for the left subtree
            return getCount(root->left, low, high);
        }
    }
};



//{ Driver Code Starts.

int main()
{
	
	int t;
	scanf("%d ", &t);
	while (t--)
	{
		string s;
		getline(cin >> ws, s);
		int l, r;
		cin >> l >> r;
		Solution ob;
		Node* root = buildTree(s);
		cout << ob.getCount(root, l, r) << endl;
		
	}
	return 1;
}

// } Driver Code Ends