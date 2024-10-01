//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#include <iostream>
#include <vector>

class Solution {
public:
    // Function to compute the GCD using the Euclidean algorithm
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Function to compute the LCM using the relationship with GCD
    long long lcm(long long num1, long long num2) {
        return (num1 / gcd(num1, num2)) * num2; // Avoiding overflow by dividing first
    }

    // Function to return both LCM and GCD
    std::vector<long long> lcmAndGcd(long long a, long long b) {
        long long gc = gcd(a, b);
        long long lc = lcm(a, b);
        return {lc, gc}; // Returning LCM and GCD
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends