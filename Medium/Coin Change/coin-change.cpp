//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int amount) {

         std::vector<long long> dp(amount + 1, 0);

        // There is one way to get amount 0 (by not using any coin)
        dp[0] = 1;

        // Iterate over all the coins
        for (int i = 0; i < N; i++) {
            // Update dp[] values for all amounts greater than or equal to the current coin's value
            for (int j = coins[i]; j <= amount; j++) {
                dp[j] += dp[j - coins[i]];
            }
        }

        // The answer will be in dp[amount]
        return dp[amount];
    }
    };

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends