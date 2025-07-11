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

class Solution {
public:
    Node* findIntersection(Node* head1, Node* head2) {
        unordered_map<int, int> map;
        Node* curr = head2;

        // Store elements of list2 in map
        while (curr) {
            map[curr->data]++;
            curr = curr->next;
        }

        // Dummy node to build new intersection list
        Node* dummy = new Node(-1);
        Node* it = dummy;

        curr = head1;
        while (curr) {
            if (map.find(curr->data) != map.end() && map[curr->data] > 0) {
                // Match found
                it->next = new Node(curr->data);  // Make new node
                it = it->next;
                map[curr->data]--;
            }
            curr = curr->next;
        }

        return dummy->next;
    }

};