//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
    public: int firstElement(int n) {
        int mod = 1000000007,a = 1, b=1,c = a+b,i=1;
        while(i<n){
            a = b;
            b = c;
            c = (a%mod+b%mod)%mod;
            i++;
        }
        return a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends