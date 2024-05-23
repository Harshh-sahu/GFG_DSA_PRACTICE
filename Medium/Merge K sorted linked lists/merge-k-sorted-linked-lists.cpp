//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    class compare{
        public:
        bool operator()(Node* a , Node* b){
        return a->data > b->data;
    }
    };
    
   
    Node * mergeKLists(Node *lists[], int k)
    {
        priority_queue<Node*,vector<Node*>,compare>minHeap;
        
   
        if(k == 0){
            return NULL;
        }
        
        for(int i = 0; i< k ; i++){
            if(lists[i] != NULL){
                minHeap.push(lists[i]);
            }
        }
        
        Node* head = NULL;
        Node* tail = NULL;
        
        while(!minHeap.empty()){
            Node* temp = minHeap.top();
            minHeap.pop();
            if(head == NULL){
                
                head = temp;
                tail = temp;
                if(tail->next != NULL){
                    minHeap.push(tail->next);
                }
            }else{
                tail->next = temp;
                tail = temp;
                if(tail->next != NULL){
                    minHeap.push(tail->next);
                }
            }
            
        }
        
        return head;
        
           
           
    }
};



//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}

// } Driver Code Ends