//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
private:
    std::vector<int> toposortBFS(int n, std::unordered_map<int, std::list<int>>& adjList) {
        std::vector<int> ans;
        std::queue<int> q;
        std::vector<int> indegree(n, 0);

        // Calculate the indegree of each node
        for (auto& i : adjList) {
            int src = i.first;
            for (auto& nbr : i.second) {
                indegree[nbr]++;
            }
        }

        // Put all nodes inside the queue which have indegree 0
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        // BFS logic
        while (!q.empty()) {
            int fnode = q.front();
            q.pop();

            ans.push_back(fnode);

            for (auto& nbr : adjList[fnode]) {
                indegree[nbr]--;
                if (indegree[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }

        // Check if we were able to process all nodes
        if (ans.size() == n) {
            return ans;
        } else {
            // If not all nodes were processed, there was a cycle
            return {};
        }
    }

public:
    std::vector<int> findOrder(int n, int m, std::vector<std::vector<int>>& prerequisites) {
        std::unordered_map<int, std::list<int>> adjList;

        // Build the adjacency list
        for (auto& task : prerequisites) {
            int u = task[0];
            int v = task[1];
            adjList[v].push_back(u);
        }

        // Perform topological sort using BFS
        return toposortBFS(n, adjList);
    }
};


//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends