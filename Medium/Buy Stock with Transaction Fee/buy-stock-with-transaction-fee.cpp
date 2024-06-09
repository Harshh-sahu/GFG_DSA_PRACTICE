//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int solve(vector<int> &prices, int i, int buy,int fee)
{
    if (i >= prices.size())
        return 0;

    int profit = 0;

    if (buy)
    {
        int buyItProfit = -prices[i] + solve(prices, i + 1,0,fee);
        int skipProfit = solve(prices, i + 1, 1,fee);
        profit = max(buyItProfit, skipProfit);
    }
    else
    {

        int sellItProfit = prices[i] + solve(prices, i + 1, 1,fee)-fee;// deducted fees 1 txn complete
        int skipProfit = solve(prices, i + 1, 0,fee);
        profit = max(sellItProfit, skipProfit);
    }
    return profit;
}

//===================================================================================================================================================================

int solveTp(vector<int> &prices, int i, int buy, vector<vector<int>> &dp,int fee)
{
    if (i >= prices.size())
        return 0;

    if (dp[i][buy] != -1)
        return dp[i][buy];
    int profit = 0;

    if (buy)
    {
        int buyItProfit = -prices[i] + solveTp(prices, i + 1, 0, dp,fee);
        int skipProfit = solveTp(prices, i + 1, 1, dp,fee);
        profit = max(buyItProfit, skipProfit);
    }
    else
    {

        int sellItProfit = prices[i] + solveTp(prices, i + 1, 1, dp,fee)-fee;
        int skipProfit = solveTp(prices, i + 1, 0, dp,fee);
        profit = max(sellItProfit, skipProfit);
    }
    dp[i][buy] = profit;
    return dp[i][buy];
}

//========================================================================================= =================================================

long long solveBU(vector<long long> &prices, vector<vector<long long>> &dp,long long fee)
{


    for (long long i = prices.size() - 1; i >= 0; --i)
    {

        for (long long buy = 0; buy < 2; buy++)
        {
                    long long profit = 0;

            if (buy)
            {
                long long buyItProfit = -prices[i] + dp[i+1][0];
                long long skipProfit = dp[i+1][1];
                profit = max(buyItProfit, skipProfit);
               
            }
            else
            {

                long long sellItProfit = prices[i] + dp[i+1][1]-fee;
                long long skipProfit = dp[i+1][0];
                profit = max(sellItProfit, skipProfit);
            }
             dp[i][buy]=profit;
        }
    }

    return dp[0][1];
    
}
    long long maximumProfit(vector<long long>&prices, int n, int fee) {
        // Code here
                // return solve(prices,0,1,fee);
        //    vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        //    return solveTp(prices,0,1,dp,fee);
    vector<vector<long long>> dp(prices.size()+1, vector<long long>(2, 0));

    return solveBU(prices, dp,fee);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        int fee; cin>>fee;
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n, fee)<<"\n";
    }
    return 0;
}
// } Driver Code Ends