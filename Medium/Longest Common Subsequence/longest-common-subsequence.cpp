//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;


// } Driver Code Ends
// function to find longest common subsequence

class Solution {
  public:
    int recursion(string &a, string &b, int i, int j, vector<vector<int>>&dp) {
        if (i == a.length()) return 0;
        if (j == b.length()) return 0;
      if(dp[i][j] != -1)return dp[i][j];
        int ans = 0;
        if (a[i] == b[j]) {
            ans = 1 + recursion(a, b, i + 1, j + 1,dp);
        } else {
            ans = max(recursion(a, b, i, j + 1,dp), recursion(a, b, i + 1, j,dp));
        }
        dp[i][j]= ans;
        return dp[i][j];
    }
    
   int dpSol(string &a,string &b,int n,int m){
         vector<vector<int>> dp(a.length() + 1, vector<int>(b.length() + 1, 0));
    for (int i = a.length()-1; i >= 0; i--)
    {
        for (int j = b.length()-1; j >= 0; j--)
        {
            int ans = 0;
            if (a[i] == b[j])
                ans = 1 + dp[i + 1][ j + 1];
            else
            {
                ans = 0 + max(dp[i][ j + 1], dp[i + 1][j]);
            }
            dp[i][j] = ans;
        }
    }
                return dp[0][0];

   }

    int lcs(int n, int m, string text1, string text2) {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        // return recursion(text1, text2, 0, 0,dp);
        
        
        return dpSol(text1,text2,n,m);
    }
};



//{ Driver Code Starts.
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m; // Take size of both the strings as input
        string str1, str2;
        cin >> str1 >> str2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
    }
    return 0;
}

// } Driver Code Ends