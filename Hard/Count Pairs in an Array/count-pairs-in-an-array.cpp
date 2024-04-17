//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
   int countPairs(int arr[] , int n ) {
        int ans = 0;
        vector<int> lis;
        for(int i = 0; i < n; i++){
            int tmp = i * arr[i], pos = upper_bound(lis.begin(), lis.end(), tmp) - lis.begin();
            ans += i - pos, lis.insert(lis.begin() + pos, tmp);
        }
        return ans;
      
       
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	Solution ob;
    	cout<<ob.countPairs(a, n)<<endl;
    }
}
// } Driver Code Ends