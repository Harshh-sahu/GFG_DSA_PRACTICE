//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    if (head == NULL)
        return;
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void append(struct Node **headRef, char data) {
    struct Node *new_node = new Node(data);
    struct Node *last = *headRef;

    if (*headRef == NULL) {
        *headRef = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}


// } Driver Code Ends



class Solution {
public:
    Node* arrangeCV(Node* head) {
        std::vector<char> ans;
        std::vector<char> first;
        std::vector<char> second;

        Node* temp = head;
        while (temp != nullptr) {
            ans.push_back(temp->data);
            temp = temp->next;
        }

        for (char c : ans) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                first.push_back(c);
            } else {
                second.push_back(c);
            }
        }

        temp = head;
        for (char c : first) {
            temp->data = c;
            temp = temp->next;
        }

        for (char c : second) {
            temp->data = c;
            temp = temp->next;
        }

        return head;
    }
};

//{ Driver Code Starts.

// task is to complete this function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        char tmp;
        struct Node *head = NULL;
        cin >> n;
        while (n--) {
            cin >> tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
    return 0;
}

// } Driver Code Ends