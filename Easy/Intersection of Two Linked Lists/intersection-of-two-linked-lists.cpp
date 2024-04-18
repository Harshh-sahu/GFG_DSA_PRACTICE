//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


// } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_set<int>s;
        vector<int>v;
        Node* temp1 = head2;
        Node* temp2 = head1;
        while(temp1)
        {
            s.insert(temp1->data);
            temp1 = temp1->next;
        }
        while(temp2)
        {
            if(s.find(temp2->data)!=s.end())
            {
                v.push_back(temp2->data);
            }
            temp2 = temp2->next;
        }
        Node* res = new Node(-1);
        Node* ans = res;
        for(int i=0;i<v.size();i++)
        {
            Node* check = new Node(v[i]);
            res->next = check;
            res = res->next;
        }
        return ans->next;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends