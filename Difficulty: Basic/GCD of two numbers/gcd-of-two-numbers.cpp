//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    #include <numeric> // Include numeric for std::gcd

  public:
  
    int gcd(int a, int b) {
 
   while(b!=0){
       int temp = b;
       b = a%b;
       a = temp;
   }
   return a;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends