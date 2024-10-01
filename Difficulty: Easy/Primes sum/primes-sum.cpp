//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
          if(N<4)return "No";
          if(N%2==0)return "Yes";
          N-=2;
          for(int i = 2 ; i * i <=N;i++){
              if(N%i==0)return "No";
              
          }
          return "Yes";
          
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
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends