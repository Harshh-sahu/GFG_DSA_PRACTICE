//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    vector<Node*> alternatingSplitList(struct Node* head) {
        Node*newHead=NULL;
        Node*ptr=NULL;
        int n=0;
        Node*ptr2=NULL;
        Node*temp=head;
         vector<Node*>ans;
        
        if(head->next==NULL)
        {
             ans.push_back(head);
             ans.push_back(NULL);
             return ans;
        }
        
        while(temp!=NULL)
        {
            if(n%2!=0)
            {
                if(newHead==NULL)
                {
                newHead=temp;
                temp=temp->next;
                newHead->next=NULL;
                ptr=newHead;
                }
                
                
                else
                {
                    ptr->next=temp;
                    ptr=temp;
                    temp=temp->next;
                    ptr->next=NULL;
                    
                }
                n++;
            }
            
            else
            {
                if(head==temp)
                {
                    temp=temp->next;
                    head->next=NULL;
                    ptr2=head;
                    
                }
                else
                {
                    ptr2->next=temp;
                    ptr2=temp;
                    temp=temp->next;
                    ptr2->next=NULL;
                    
                }
                
                n++; 
                
            }
            
        }
        
       
        ans.push_back(head);
        ans.push_back(newHead);
        return ans;
        
        
      
    }
};



//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends