//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int solveRE(vector<int>& prices, int i, int buy, int limit) {
        if (i >= prices.size())
            return 0;
        if (limit == 0)
            return 0;

        int profit = 0;

        if (buy) {
            int buyItProfit = -prices[i] + solveRE(prices, i + 1, 0, limit);
            int skipProfit = solveRE(prices, i + 1, 1, limit);
            profit = max(buyItProfit, skipProfit);
        } else {

            int sellItProfit = prices[i] + solveRE(prices, i + 1, 1, limit - 1);
            int skipProfit = solveRE(prices, i + 1, 0, limit);
            profit = max(sellItProfit, skipProfit);
        }
        return profit;
    }
    int solveTD(vector<int>& prices, int i, int buy, int limit,
                vector<vector<vector<int>>>& dp) {
        if (i >= prices.size())
            return 0;
        if (limit == 0)
            return 0;

        if (dp[i][buy][limit] != -1)
            return dp[i][buy][limit];
        int profit = 0;

        if (buy) {
            int buyItProfit = -prices[i] + solveTD(prices, i + 1, 0, limit, dp);
            int skipProfit = solveTD(prices, i + 1, 1, limit, dp);
            profit = max(buyItProfit, skipProfit);
        } else {

            int sellItProfit =
                prices[i] + solveTD(prices, i + 1, 1, limit - 1, dp);
            int skipProfit = solveTD(prices, i + 1, 0, limit, dp);
            profit = max(sellItProfit, skipProfit);
        }
        // return profit;
        dp[i][buy][limit] = profit;

        return profit;
    }
    int solveBU(vector<int>& prices, int i, int buy, int k,
                vector<vector<vector<int>>>& dp) {

        for (int i = prices.size() - 1; i >= 0; --i) {
            for (int buy = 0; buy < 2; ++buy) {
                for (int limit = 1; limit < k+1; ++limit) {
                    int profit = 0;

                    if (buy) {
                        int buyItProfit =
                            -prices[i] + dp[i+1][0][limit];
                        int skipProfit = dp[i+1][1][limit];
                        profit = max(buyItProfit, skipProfit);
                    } else {

                        int sellItProfit = prices[i] + dp[i+1][1][limit-1];
                        int skipProfit = dp[i+1][0][limit];
                        profit = max(sellItProfit, skipProfit);
                    }
                    // return profit;
                    dp[i][buy][limit] = profit;
                }
            }
        }
        return dp[0][1][k];
    }
    int maxProfit(int k , int N, int A[]) {
          //   return solveRE(prices,0,1,k);
       
        //  vector<vector<vector<int>>> dp(n, vector<vector<int>>(2,
        //  vector<int>(k+1, -1)));

        // return solveTD(prices,0,1,k,dp);
        vector<int>prices;
       for(int i =0 ;i< N;i++){
           prices.push_back(A[i]);
       }
 int n = prices.size();

        vector<vector<vector<int>>> dp(
            n + 1, vector<vector<int>>(2, vector<int>(k+1, 0)));

        return solveBU(prices, 0, 1, k, dp);
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends