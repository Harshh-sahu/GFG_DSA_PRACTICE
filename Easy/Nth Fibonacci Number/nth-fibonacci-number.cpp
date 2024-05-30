//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int topDown(int n,vector<int>&dp)
    {
       if(n==1 || n==2)     return 1;
       
        if(dp[n]!=-1)   return dp[n];
        dp[n] = (topDown(n-1,dp) + topDown(n-2,dp)) % 1000000007;
        return dp[n];
    }
    int nthFibonacci(int n){
        vector<int>dp(n+1,-1);
        
        int ans = topDown(n,dp);
        
        return ans;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends