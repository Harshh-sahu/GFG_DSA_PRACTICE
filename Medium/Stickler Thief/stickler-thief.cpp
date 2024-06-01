//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
   int solve(int nums[], int n, vector<int>&dp){
       if(n < 0)return 0;
       if(n==0)return nums[0];
       if(dp[n]!= -1)return dp[n];
       
       
       int include= solve(nums,n-2,dp)+nums[n];
       int exclude= solve(nums,n-1,dp)+0;
       dp[n] = max(include,exclude);
       return dp[n];
   }

    int FindMaxSum(int nums[], int n)
    {    vector<int>dp(n+1,-1);
       return solve(nums,n-1,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends