//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
       stack<char>st;
       for(auto ch : s){
            st.push(ch);
            
       }
       
       string ans;
       while(!st.empty()){
           ans += st.top();
           st.pop();
       }
  
  
  stack<string>real;
  string temp ="";
  for(int i = 0 ; i < ans.size();i++){
      if(ans[i]=='.'){
          real.push(temp);
         
          temp = "";
      }
      if(ans[i]=='.'){
         real.push(".");
      }
      if(ans[i]!='.'){
                temp +=ans[i];

      }
      
  }
  
real.push(temp);
  string realans;
   while(!real.empty()){
           realans += real.top();
           real.pop();
       }
       return realans;}
      
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends