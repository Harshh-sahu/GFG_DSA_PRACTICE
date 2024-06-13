//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define mod 1000000007
class Solution {
  public:
    int padovanSequence(int n) {
        if(n==0 || n == 1 || n == 2)return 1;
        int prev1 = 1, prev2 = 1, prev3 = 1;
        for(int i=3; i<=n; i++){
            int curr = (prev2%mod + prev3%mod)%mod;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
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
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends