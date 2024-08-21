//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   vector<int> shortestPath(vector<vector<int>>& edges, int n, int M, int src) {
        vector<vector<pair<int, int>>> adj(n);
        vector<int> dist(n, INT_MAX);

        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2]; 
            adj[u].push_back({v, 1});
            adj[v].push_back({u, 1}); 
        }

        dist[src] = 0;
        set<pair<int, int>> s; 
        s.insert({0, src});

        while (!s.empty()) 
        {
            auto it = s.begin();
            int currNode = it->second;
            int distTillNow = it->first;
            s.erase(it);

            for (auto nbrPair : adj[currNode]) 
            {
                int nbr = nbrPair.first;
                int edgeWeight = nbrPair.second;

                if (distTillNow + edgeWeight < dist[nbr]) 
                {
                    auto f = s.find({dist[nbr], nbr});
                    if (f != s.end()) 
                    {
                        s.erase(f);
                    }
                    dist[nbr] = distTillNow + edgeWeight;
                    s.insert({dist[nbr], nbr});
                }
            }
        }
         for (int i = 0; i < n; i++) 
         {
            if (dist[i] == INT_MAX) 
            {
                dist[i] = -1;
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends