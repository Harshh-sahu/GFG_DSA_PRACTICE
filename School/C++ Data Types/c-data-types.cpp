//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {

public: 

   int cppIntType() { int x; cin >> x; return x; }
char cppCharType() { char x; cin >> x; return x; }
float cppFloatType() { float x; cin >> x; return x; }
};

//{ Driver Code Starts.

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends