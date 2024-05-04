//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

vector<int>ans;
void interleaveQueue(queue<int> &q)
{
    // step A seprarate 2 half
    int n = q.size();
    int k = n / 2;
    if (q.empty())
        return;

    int count = 0;
    queue<int> q2;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        if (count == k)
        {
            break;
        }
    }

    // step B; interleaving start krdo

    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();

        ans.push_back(first);
         
        int second = q.front();
        q.pop();
        ans.push_back(second);

    }


    //odd wala case
    if(n&1){
        int element = q.front();
        q.pop();
        ans.push_back(element);
    }
}
    vector<int> rearrangeQueue(queue<int> &q){
            interleaveQueue(q);
return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends