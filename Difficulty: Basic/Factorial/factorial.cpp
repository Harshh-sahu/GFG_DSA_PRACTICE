//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
    typedef long long int ll;
public:
    long long int factorial(int N){
        ll count = 1 ; 
        
      for(ll i =1 ; i <= N ; i++){
          count = count*i;
      }
      return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends