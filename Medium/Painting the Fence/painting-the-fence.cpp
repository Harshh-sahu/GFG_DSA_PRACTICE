//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long solveT(int n,int k){
        long long int mod=1000000007;
        long long int prev2=k;
        long long int prev1=((k%mod)*(k%mod))%mod;
        if(n==1)
            return prev2;
        if(n==2)
            return prev1;
        long long int curr;
        for(int i=3;i<=n;i++){
            curr=((prev2+prev1)*(k-1))%mod;
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }

long long countWays(int n, int k){
        unsigned long long ans=solveT(n,k);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends