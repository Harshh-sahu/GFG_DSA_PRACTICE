//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    void reverseK(queue<int>&q,int k){
         int n = q.size();
       if(k==0 && k > n)return;
       
       stack<int>s;
       int count = 0 ; 
       while(!q.empty()){
           int temp = q.front();
           q.pop();
           s.push(temp);
           count++;
           if(count==k){
               break;
           }
       }
        while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
        
    }
    //step c push n-1 k elemnets front to back
 

    count = 0;
    while(!q.empty() && n-k !=0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count == n-k){
            break;
        }

    }
       
    }
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
      reverseK(q,k);
      
      return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends