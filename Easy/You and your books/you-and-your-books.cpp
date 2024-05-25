//{ Driver Code Starts
#include <algorithm>
#include <cstdio>
#include <iostream>
//#include<Windows.h>
using namespace std;


// } Driver Code Ends

#include<limits.h>
class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        long long maxi=INT_MIN;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                ans+=arr[i];
                maxi=max(maxi,ans);
            }
            else{
                ans=0;
            }
        }
        if(maxi!=INT_MIN)
        return maxi;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        Solution ob;
        cout << ob.max_Books(ar, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends