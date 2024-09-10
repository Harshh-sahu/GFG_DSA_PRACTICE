//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isCircle(vector<string> &arr) {
        // code here
        int n = arr.size();
        for(auto &s: arr){
            char b = s[0], e = s[s.size()-1];
            string a = "";
            a += b; a+=e;
            s = a;
        }
        vector<vector<int>> adj(26);
        vector<int> out(26,0), in(26, 0);
        for(int i=0;i<n;i++){
            int s = arr[i][0] - 'a';
            int e = arr[i][arr[i].size()-1] - 'a';
            adj[s].push_back(e);
            out[s]++; in[e]++;
        }
        for(int i=0;i<26;i++){
            if(in[i] != out[i]) return 0;
        }
        queue<int> q;
        q.push(arr[0][0] - 'a'); int count = 0;
        while(q.size()){
            int u = q.front();
            q.pop();
            for(auto v: adj[u]){
                if(in[v]){
                    q.push(v);
                    in[v]--;
                    count++;
                }
            }
        }
        if(count == n)
        return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }

        Solution ob;
        cout << ob.isCircle(A) << endl;
    }
    return 0;
}
// } Driver Code Ends