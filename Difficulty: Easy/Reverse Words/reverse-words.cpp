//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        string ans = "";
        string temp = "";
        stack<string> st;

        // Traverse the string
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != '.') {
                temp += str[i];  // Collect characters for a word
            } else {
                st.push(temp);  // Push the word into the stack
                st.push(".");   // Push the dot separator
                temp = "";      // Clear temp for the next word
            }
        }
        // Push the last word after the loop
        st.push(temp);

        // Build the reversed string by popping from the stack
        while (!st.empty()) {
            ans += st.top();  // Append top of the stack to the answer
            st.pop();         // Pop the top element
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends