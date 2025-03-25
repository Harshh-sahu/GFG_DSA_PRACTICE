//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countMinReversals(string s) {
        if (s.size() % 2 == 1) return -1; // Odd length can't be balanced
        
        stack<char> st;
        
        for (char ch : s) {
            if (ch == '{') {
                st.push(ch);
            } else {
                if (!st.empty() && st.top() == '{') {
                    st.pop();  // Valid pair found
                } else {
                    st.push(ch);  // Unbalanced closing bracket
                }
            }
        }
        
        int openBraces = 0, closeBraces = 0;
        
        while (!st.empty()) {
            if (st.top() == '{') openBraces++;
            else closeBraces++;
            st.pop();
        }
        
        return (openBraces + 1) / 2 + (closeBraces + 1) / 2;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        Solution sol;
        string s;
        cin >> s;
        cout << sol.countMinReversals(s) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends