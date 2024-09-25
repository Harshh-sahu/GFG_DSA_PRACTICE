//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

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

class Solution {
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

/* Function to print nodes in a given linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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

        if (arr.empty()) {
            cout << "empty" << endl;
            continue;
        }

        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        if (ob.isPalindrome(head))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        // Clean up the remaining nodes to avoid memory leaks
        while (head != NULL) {
            struct Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}

// } Driver Code Ends