//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
    stack<string>st;
    
    for(auto ch : s){
        if(ch == ']'){
            string stringToRepeat ="";
            while(!st.empty() && !isdigit(st.top()[0])){
                string top = st.top();
                stringToRepeat += top == "[" ? "" : top;
                st.pop();
            }
            
            string numericTimes = "";
            while(!st.empty() && isdigit(st.top()[0])){
                numericTimes += st.top();
                st.pop();
            }
            
            reverse(numericTimes.begin(),numericTimes.end());
            int n = stoi(numericTimes);
            
            //final decoding 
            string currentdecode = "";
            while(n--){
                currentdecode += stringToRepeat;
                
            }
            st.push(currentdecode);
        }else{
            string temp(1,ch);
            st.push(temp);
            
        }
    }
     string ans;
     while(!st.empty()){
         ans += st.top();
         st.pop();
     }
reverse(ans.begin(),ans.end());
return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends