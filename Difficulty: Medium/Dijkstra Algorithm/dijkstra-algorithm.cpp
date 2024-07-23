//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> shortestPath(int src, int n, vector<vector<int>> adjList[])
    {
        vector<int> dist(n, INT_MAX);
        set<pair<int, int>> st;
        dist[src] = 0;
        st.insert(make_pair(0, src));

        while (!st.empty())
        {
            auto topElement = *(st.begin());
            int nodeDistance = topElement.first;
            int node = topElement.second;

            st.erase(st.begin());

            for (auto nbr : adjList[node])
            {
                if (nodeDistance + nbr[1] < dist[nbr[0]])
                {
                    auto result = st.find(make_pair(dist[nbr[0]], nbr[0]));

                    if (result != st.end())
                    {
                        st.erase(result);
                    }

                    dist[nbr[0]] = nodeDistance + nbr[1];

                    st.insert(make_pair(dist[nbr[0]], nbr[0]));
                }
            }
        }
        return dist;
    }

    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> ans = shortestPath(S, V, adj);
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends