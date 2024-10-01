//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
       int sum = 0 ; 
       int num = n;
       while(n >0){
           int lastDigit =n% 10;
           sum += lastDigit*lastDigit*lastDigit;
           n/=10;
           
       }
       if(sum == num){
           return "true";
       }
       return "false";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends