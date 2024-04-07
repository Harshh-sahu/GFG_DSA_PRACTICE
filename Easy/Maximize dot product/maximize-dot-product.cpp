//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public:
int maxDotProduct(int n, int m, int a[], int b[]) {
	int res[m+1] = {};
	for(int i=0;i<n;i++) {
	    for(int j=min(m,i+1);j>0;j--)
	        res[j] = max(res[j],a[i]*b[j-1]+res[j-1]);
	}
	return res[m];
}
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends