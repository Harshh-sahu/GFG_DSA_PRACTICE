//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
long long int solveUsingMem(int n, int k, int target, vector<vector<long long int>>& dp) {
    // Base cases
    if (n == 0 && target == 0) return 1;
    if (n == 0 || target < 0) return 0;

    // Memoization check
    if (dp[n][target] != -1) return dp[n][target];

    long long int ans = 0;
    for (int i = 1; i <= k; ++i) {
        if (target - i >= 0) {
            ans = ans + solveUsingMem(n - 1, k, target - i, dp);
        }
    }

    dp[n][target] = ans;
    return ans;
}

    long long noOfWays(int k , int n , int target) {
        // code here
         vector<vector<long long int>> dp(n + 1, vector<long long int>(target + 1, -1));
    return solveUsingMem(n, k, target, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends