//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

  class Solution {
  public:
    int numberOfConsecutiveOnes(int n) {
        // code here
        if(n==2)return 1;
        int a=0,b=1,ans=1,mod=1e9+7;
        for(int i=3; i<=n; i++){
            int c=(a+b)%mod;
            a=b;
            b=c;
            ans=((ans*2)%mod+c)%mod;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends