//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution 
{
public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        
        //step 1: push all persons into the stack
        for(int i = 0; i < n; ++i){
            st.push(i);
        }
        
        //step 2: run discard method to get a might-be celebrity
        while(st.size() > 1){
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            // if a knows b, a is not a celebrity, b might be
            if(M[a][b]){
                st.push(b);
            }
            else{ // b is not a celebrity, a might be
                st.push(a);
            }
        }
        
        // step 3: check if the single person is actually a celebrity 
        int mightBeCelebrity = st.top();
        st.pop();
        
        // check if the potential celebrity knows anyone
        for(int i = 0; i < n; i++){
            if(M[mightBeCelebrity][i] != 0){
                return -1;
            }
        }
        
        // check if everyone knows the potential celebrity
        for(int i = 0; i < n; i++){
            if(M[i][mightBeCelebrity] == 0 && i != mightBeCelebrity){
                return -1;
            }
        }
        
        // the potential celebrity is indeed a celebrity
        return mightBeCelebrity;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends