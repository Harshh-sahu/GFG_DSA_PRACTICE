//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    unordered_map<int, int> unmap;
     
    // Depth-first search (DFS) function to calculate
    // the size of an island.
    int dfs(int i, int j, vector<vector<int> >& grid, vector<vector<bool> >& visited, int key)
    {
        int n = grid.size();
     
        // Base cases: Check for boundaries,
        // visited status, and water (grid[i][j] == 0).
        if (i < 0 || j < 0 || i >= n || j >= n || visited[i][j]
            || grid[i][j] == 0) {
            return 0;
        }
     
        // Mark the current cell as visited.
        visited[i][j] = true;
     
        // Recursively explore adjacent cells and
        // accumulate the island size.
        int count = 1 + dfs(i + 1, j, grid, visited, key)
                    + dfs(i - 1, j, grid, visited, key)
                    + dfs(i, j + 1, grid, visited, key)
                    + dfs(i, j - 1, grid, visited, key);
     
        // Update the cell's value to the key
        // representing the island.
        grid[i][j] = key;
        return count;
    }
     
    int MaxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        int key = 2;
        vector<vector<bool> > visited(n,
                                    vector<bool>(n, false));
     
        // Traverse the grid to identify and mark
        // islands, and store their sizes in the map.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] == false && grid[i][j] == 1) {
                    int count = dfs(i, j, grid, visited, key);
     
                    // Store island size in the map.
                    unmap[key] = count;
                    key++;
                }
            }
        }
     
        int result = -1;
        vector<vector<bool> > visited2(n,
                                    vector<bool>(n, false));
     
        // Traverse the grid again to identify water
        // cells and calculate the largest
        // possible island.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
     
                    // Check adjacent cells and
                    // gather island sizes from the map.
                    int a = (i + 1 < n) ? grid[i + 1][j] : 0;
                    int b = (i - 1 >= 0) ? grid[i - 1][j] : 0;
                    int c = (j + 1 < n) ? grid[i][j + 1] : 0;
                    int d = (j - 1 >= 0) ? grid[i][j - 1] : 0;
     
                    // Store unique island sizes
                    // around the current water cell.
                    set<int> st;
                    st.insert(a);
                    st.insert(b);
                    st.insert(c);
                    st.insert(d);
     
                    int res = 1;
     
                    // Calculate the combined size
                    // of neighboring islands.
                    for (auto it = st.begin(); it != st.end();
                        it++) {
                        res += unmap[*it];
                    }
     
                    // Update the largest island size.
                    result = max(result, res);
                }
            }
        }
     
        // If no land cells were present (only water),
        // return the size of the entire grid.
        if (result == -1) {
            return n * n;
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout << obj.MaxConnection(grid) << "\n";
    }
}

// } Driver Code Ends