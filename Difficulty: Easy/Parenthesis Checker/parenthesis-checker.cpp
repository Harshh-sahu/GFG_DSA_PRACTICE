//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>st;
        for(char &ch:x){
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }else if(ch==')'){
                if(st.empty() || st.top()!='(') return 0;
                else st.pop();
            }else if(ch=='}'){
                if(st.empty() || st.top()!='{') return 0;
                else st.pop();
            }else{
                if(st.empty() || st.top()!='[') return 0;
                else st.pop();
            }
        }
        return st.empty()?1:0;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends