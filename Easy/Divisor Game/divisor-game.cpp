//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool divisorGame(int n) {
        vector<bool> dp(n+1,false);
        dp[2] = true;
        
        for(int i=3; i<=n; i++) {
            for(int j=1; j<i; j++) {
                if(i % j == 0) 
                dp[i] = dp[i] | !dp[i-j];
            }
        }
     return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution obj;
        bool ans = obj.divisorGame(n);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends