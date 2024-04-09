//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minPoints(int n, int m, vector<vector<int>> points) 
    { 
        // Your code goes here
        vector<vector<int>> dp(n+1,vector<int>(m+1,INT_MAX));
        dp[n-1][m-1] = max(1-points[n-1][m-1],1);
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(j+1<m){
                    dp[i][j] = min(dp[i][j],max(dp[i][j+1]-points[i][j],max(1-points[i][j],1)));
                }
                if(i+1<n){
                    dp[i][j] = min(dp[i][j],max(dp[i+1][j]-points[i][j],max(1-points[i][j],1)));
                }
            }
        }
        return dp[0][0];
    } 
};


//{ Driver Code Starts.
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        vector<vector<int>> a(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        	for(int j = 0; j < n; j++)
        		cin >> a[i][j];

        

	    Solution ob;
	    cout << ob.minPoints(m,n,a) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends