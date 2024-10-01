//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
      const int MOD = 1000000007;
        
        // Handle base case
        if (n == 1 || n == 2) {
            return 1; // The first two Fibonacci numbers are both 1
        }

        // Create a vector to store Fibonacci numbers
        vector<int> fib(n + 1);
        fib[1] = 1; // F(1)
        fib[2] = 1; // F(2)

        // Calculate Fibonacci numbers up to n
        for (int i = 3; i <= n; ++i) {
            fib[i] = (fib[i - 1] + fib[i - 2]) % MOD; // Fibonacci formula
        }

        return fib[n]; // Return the nth Fibonacci number
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends