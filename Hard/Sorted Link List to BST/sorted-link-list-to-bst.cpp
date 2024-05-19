//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; 

void preOrder(TNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
} 


// } Driver Code Ends
//User function Template for C++


//User function Template for C++

/* 
//Linked List
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */

class Solution {
public:
    TNode* sortedListToBST(LNode *head) {
        int n = getCount(head);
        return sortedLinkedListIntoBST(head, n);
    }

private:
    int getCount(LNode* head) {
        int count = 0; // Initialize count
        LNode* current = head; // Initialize current
        while (current != NULL) {
            count++;
            current = current->next;
        }
        return count;
    }

    TNode* sortedLinkedListIntoBST(LNode* &head, int n) {
        // Base case
        if (n <= 0 || head == NULL) return NULL;

        // Recursively build the left subtree
        TNode* leftSubtree = sortedLinkedListIntoBST(head, n / 2);

        // Allocate memory for the root node and initialize it with head's data
        TNode* root = new TNode(head->data);

        // Set the left child of the root
        root->left = leftSubtree;

        // Move the head pointer to the next node in the linked list
        head = head->next;

        // Recursively build the right subtree
        root->right = sortedLinkedListIntoBST(head, n - 1 - n / 2);

        return root;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        Solution ob;
        TNode* Thead = ob.sortedListToBST(head);
        preOrder(Thead);
        cout<<"\n";
        
    }
    return 0;
}

// } Driver Code Ends