//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int index, vector<int> adj[],vector<int> &visited,vector<int> &pathvisited,int V){
        visited[index] = 1;
        pathvisited[index] = 1;
        
        for(int i=0;i<adj[index].size();i++){
            if(visited[adj[index][i]] == 0){
                if(dfs(adj[index][i],adj,visited,pathvisited,V)) return true;
            }
            else if(pathvisited[adj[index][i]] == 1){
                return true;
            }
        }
        
        pathvisited[index] = 0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> visited(V,0);
        vector<int> pathvisited(V,0);
        
        for(int i=0;i<V;i++){
            if(visited[i] == 0){
                if(dfs(i,adj,visited,pathvisited,V)) return true;
            }
        }
        
        return false;
    }


};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends