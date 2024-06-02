//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
  
bool recursion(int index, vector<int>& arr, int target, int n, vector<vector<int>>& dp) {
    // Base cases
    if (target == 0) return true;
    if (index >= n || target < 0) return false;

    // Check memoization table
    if (dp[index][target] != -1) return dp[index][target];

    // Include the current element in the subset
    bool include = recursion(index + 1, arr, target - arr[index], n, dp);

    // Exclude the current element from the subset
    bool exclude = recursion(index + 1, arr, target, n, dp);

    // Store result in dp table
    dp[index][target] = include || exclude;
    return dp[index][target];
}

bool isSubsetSum(vector<int> arr, int sum) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
    return recursion(0, arr, sum, n, dp);
}

};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends