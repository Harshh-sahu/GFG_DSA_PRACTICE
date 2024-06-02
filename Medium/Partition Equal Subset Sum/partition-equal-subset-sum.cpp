//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

bool recursiondp(int index, int nums[], int target, int n, vector<vector<int>> &dp) {
    // Base cases
    if (target == 0) return true;
    if (index >= n || target < 0) return false;

    // Check memoization table
    if (dp[index][target] != -1) return dp[index][target];

    // Include the current number
    bool include = recursiondp(index + 1, nums, target - nums[index], n, dp);

    // Exclude the current number
    bool exclude = recursiondp(index + 1, nums, target, n, dp);

    // Store result in dp table
    dp[index][target] = include || exclude;
    return dp[index][target];
}

int equalPartition(int N, int arr[]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    // If the sum is odd, we can't partition it into two equal subsets
    if (sum % 2 != 0) return false;

    int target = sum / 2;
    vector<vector<int>> dp(N, vector<int>(target + 1, -1));
    return recursiondp(0, arr, target, N, dp);
}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends