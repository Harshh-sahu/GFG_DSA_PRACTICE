//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
int numsquareHelper(int n, vector<int>&dp){
     //base case
          if(n==0)return 1;
          if(n<0)return 0;

          if(dp[n] != -1){
            return dp[n];
          }
          int ans = INT_MAX;
          int i = 1;
          int end = sqrt(n);
          while(i <= end){

          int perfectsquare = i*i;
          int numberofPerfectSquare = 1+numsquareHelper(n-perfectsquare,dp);
          if(numberofPerfectSquare < ans){
            ans = numberofPerfectSquare;
          }
          ++i;
          
          }
        //   return ans;
        dp[n] = ans;
        return dp[n];
}
	int MinSquares(int n)
	{
	    // Code here
	             vector<int>dp(n+1,-1);
         return  numsquareHelper(n,dp)-1;

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends