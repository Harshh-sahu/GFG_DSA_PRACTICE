//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void findBridges(int src, int parent, int &timer, vector<int>& tin, vector<int>& low, unordered_map<int, bool>& vis, vector<vector<int>>& ans, vector<int> adj[]) {
        vis[src] = true;
        tin[src] = low[src] = timer++;
        
        for (auto nbr : adj[src]) {
            if (nbr == parent) continue;
            
            if (!vis[nbr]) {
                findBridges(nbr, src, timer, tin, low, vis, ans, adj);
                low[src] = min(low[src], low[nbr]);
                
                if (low[nbr] > tin[src]) {
                    vector<int> bridge = {min(src, nbr), max(src, nbr)};
                    ans.push_back(bridge);
                }
            } else {
                low[src] = min(low[src], tin[nbr]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<int> adj[]) {
        vector<vector<int>> ans;
        int timer = 0;
        vector<int> tin(n, -1);
        vector<int> low(n, -1);
        unordered_map<int, bool> vis;

        for (int i = 0; i < n; i++) {
            vis[i] = false;
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                findBridges(i, -1, timer, tin, low, vis, ans, adj);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
	int tc;
    cin >> tc;
    while(tc--){
        int V, E;
        cin >> V >> E;
        vector<int>adj[V];
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        vector<vector<int>>ans = obj.criticalConnections(V, adj);
        
        for(int i=0;i<ans.size();i++)
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
	return 0;
}
// } Driver Code Ends