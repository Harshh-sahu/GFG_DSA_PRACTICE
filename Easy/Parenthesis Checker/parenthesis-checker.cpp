//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {  stack<char>st;

        for(int i =0 ; i < s.length();i++){
            char ch = s[i];

            //opening bracket 

            if(ch == '(' || ch == '{'|| ch== '['){
                st.push(ch);
            }else{
                //closing bracket
                 if(!st.empty()){
                    char topCh = st.top(); 
                    if(ch == ')' and topCh == '('){
                        st.pop();
                    }
                     else if(ch == '}' and topCh == '{'){
                        st.pop();
                    }
                    else if(ch == ']' and topCh == '['){
                        st.pop();
                    }else{
                        //brackets not matching
                        return false;
                    }
                 }else{
                    return false;
                 }

                 
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
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