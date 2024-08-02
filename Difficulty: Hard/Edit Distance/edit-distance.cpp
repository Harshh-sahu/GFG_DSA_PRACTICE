//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int n,m;
  
    int solve(string &str1,string &str2,int i ,int j ,vector<vector<int>>&dp){
        if(i >= n){
            return m-j;
        
        }
        if(j >= m){
            return n-i;
            
        }
        if(dp[i][j] != -1){ return dp[i][j];}
        int ans = 0;
        
            if(str1[i] == str2[j]){
                return solve(str1,str2,i+1,j+1,dp);
                
            }else{
                int insert = 1 + solve(str1,str2,i,j+1,dp);
                int deletes = 1 + solve(str1,str2,i+1,j,dp);
                int replace = 1 + solve(str1,str2,i+1,j+1,dp);
                ans = min(insert,min(deletes,replace));
                
            
        }return dp[i][j]= ans;
    }
  
    int editDistance(string str1, string str2) {
    n = str1.size();
    m = str2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return solve(str1,str2,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends