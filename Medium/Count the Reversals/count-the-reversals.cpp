//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
   //if odd size string then impossibel to make pait
   if(s.size() & 1) return -1;
   
   int ans = 0;
   
   stack<char>st;
   for(char ch : s){
       if(ch == '{'){
           st.push(ch);
       }else{
           if(!st.empty() && st.top() == '{'){
               st.pop();
           }else
               st.push(ch);
         
       }
   }
   //if stack is not empty lets count reversal 
   while(!st.empty()){
       char a = st.top();st.pop();
       char b = st.top();st.pop();
       
       if(a== b)
        ans+=1;
       else 
        ans+=2;
       
      
   }
   
    return ans;
}