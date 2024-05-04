//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Queue {
    stack<int> input, output;
public:
  
    void enqueue(int x) {
         
        while(!output.empty()){
            input.push(output.top());
            output.pop();
        }
        
        input.push(x);
        
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        
    }


    
 
    int dequeue() {
        
        int ans=output.top();
        output.pop();
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}

// } Driver Code Ends