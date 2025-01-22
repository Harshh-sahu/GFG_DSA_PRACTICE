//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution {
  public:
    Node *reverse(Node *head)
    {
        Node *temp = head;
        Node *nextnode=NULL,*prev=NULL;
        
        while(temp!=NULL)
        {
            nextnode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextnode;
        }
        
        return prev;
    }
    Node* addTwoLists(Node* num1, Node* num2)
    {
        num1 = reverse(num1);
        num2 = reverse(num2);
        Node *num3 = new Node(-1);
        Node *head = num3;
        
        int carry=0;
        while(num1 || num2 || carry)
        {
            int sum=0;
            if(num1){
                sum+=num1->data;
                num1 = num1->next;
            }
            
            if(num2){
                sum+=num2->data;
                num2 = num2->next;
            }
            
            sum += carry;
            carry = sum/10;
            
            if(num1==NULL&&num2==NULL&& sum==0 &&carry==0){
                break;
            }
            Node *newnode = new Node(sum%10);
            num3->next = newnode;
            num3 = newnode;
        }
        if(carry)
        {
            num3->data += carry;
        }
        head = reverse(head->next);
        return head;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends