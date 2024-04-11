//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        vector<int> arr;
        while(n>0)
        {
            arr.push_back(n&1);
            n=n>>1;
        }
        reverse(arr.begin(), arr.end());
        for(int i=1; i<arr.size(); i++)
        {
            arr[i]^=arr[i-1];
        }
        int ans=0;
        int pp=0;
        for(int i=arr.size()-1; i>=0; i--)
        {
            ans+=arr[i]*pow(2, pp);
            pp++;
        }
        return ans;
        
    }
};



//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends