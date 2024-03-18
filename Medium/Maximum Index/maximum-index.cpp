//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
     int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<int> right(n);
        right[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)right[i]=max(a[i],right[i+1]);
        int i=0,j=0,ans=INT_MIN;
        while(i<n and j<n){
            if(a[i]<=right[j]){
                ans=max(ans,j-i);
                j++;
            }
            else i++;
        }
        return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends