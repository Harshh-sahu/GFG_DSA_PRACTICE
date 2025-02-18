//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void lastOccurrence(string &s, char x, int i, int &ans) {
        // Base case: If we have checked all characters
        if (i < 0) return;

        // If character matches, update answer
        if (s[i] == x) {
            ans = i;
            return; // Stop further recursion since we found the last occurrence
        }

        // Recursive call to check previous index
        lastOccurrence(s, x, i - 1, ans);
    }

    int LastIndex(string s, char p) {
        int ans = -1;
        lastOccurrence(s, p, s.size() - 1, ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    
cout << "~" << "\n";
}
    return 0;
}


// } Driver Code Ends