//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
  
  
     Node* reverse(Node* head){
         Node* prev =NULL;
         Node* curr = head;
         Node* next = curr->next;
         
         
         
         
         while(curr!=NULL){
             next = curr->next;
             curr->next = prev;
             prev = curr;
             curr=next;
             
         }
         
        
        return prev; // Update head to point to the reversed list
         
     }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
     
     if(head == NULL){
         return true;
         
     }
     if(head->next == NULL){
         return true;
         
         
     }
     
     
     Node* slow = head;
     Node* fast = head->next;
     
     while(fast != NULL){
         fast = fast->next;
         if(fast!= NULL){
             fast = fast->next;
             slow = slow->next;
         }
     }
     
     
     Node* reverseLL = reverse(slow->next);
     
     slow->next = reverseLL;
     
     
     Node* temp1 = head;
     Node* temp2 = slow->next;
     
     while(temp2!=NULL){
         if(temp1->data != temp2->data){
             return false;
             
         }else{
             temp1=temp1->next;
             temp2 = temp2->next;
             
         }
     }
     
     
return true;
     
     
     
     
     
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends