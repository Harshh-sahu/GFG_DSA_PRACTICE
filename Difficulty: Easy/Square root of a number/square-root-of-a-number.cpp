//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
    long long int high=n;
        long long int low=0;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            if (mid*mid>n) high=mid-1;
            else if (mid*mid<n) low=mid+1;
            else return mid;
        }
        return high;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends