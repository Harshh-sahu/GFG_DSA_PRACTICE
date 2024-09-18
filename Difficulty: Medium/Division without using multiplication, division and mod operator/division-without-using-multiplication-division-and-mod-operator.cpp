//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        
        
        
         
        //code here
        long long s = 0 ;
         long long e =abs(dividend);
         long long dividends = e;
         long long divisors= abs(divisor);
         int ans = 0 ; 
         
         while(s<=e){
             
             int mid = s+(e-s)/2;
             if(mid*divisors == dividends){
                 ans =  mid;
                 break;
             }
             
             if(mid*divisors > dividends){
                e = mid -1;
             }else{
                 ans = mid;
                 s = mid+1;
             }
             
         }
         
         if(dividend>0 && divisor>0 || dividend <0&& divisor<0)return ans;
         else return -ans;
         
         
         
         
         
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends