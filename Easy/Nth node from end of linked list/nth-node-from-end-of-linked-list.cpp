//{ Driver Code Starts
//Initial Template for C++
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
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


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/



//Function to find the data of nth node from the end of a linked list.
class Solution{
public:


  int getLength(Node *head){
      int len;
      Node* temp = head;
      while(temp!= NULL){
          temp = temp->next;
          len++;
          
      }
      return len;
  }


    int getNthFromLast(Node *head, int n)
    {
        int len = getLength(head);
        Node *temp = head;
        
        if(n > len){
            return -1;
        }
        for(int i = 0 ; i  < len-n;i++ ){
            temp= temp->next;
        }
        if(temp->data == NULL){
            return -1;
        }else{
            return temp->data;
        }
        
        
        
        
    }
};



//{ Driver Code Starts.

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends