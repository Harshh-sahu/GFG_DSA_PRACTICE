//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
       
       stack<int>st;
       st.push(-1);
       int maxLength = 0;
       for(int i = 0 ; i < s.length();i++){
          char ch = s[i];
          if(ch == '('){
              st.push(i);
          }else{
              st.pop();
              if(st.empty()){
                  st.push(i);
              }else{
                  int len = i - st.top();
                  maxLength = max(len,maxLength);
                  
              }
          }
       }
       return maxLength;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends