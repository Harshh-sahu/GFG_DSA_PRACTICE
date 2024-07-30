//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string t = "";
    vector<string> ans;
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size();
        if (n == 0 || mat[0][0] == 0 || mat[n - 1][n - 1] == 0) {
            return {};
        }
    
        vector<vector<int>> vis(n, vector<int>(n, 0));
        dfs(mat, vis, 0, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
    
    void dfs(vector<vector<int>> &mat, vector<vector<int>> &vis, int x, int y) {
        int n = mat.size();
        if (x == n - 1 && y == n - 1) {
            ans.push_back(t);
            return;
        }
    
        vis[x][y] = 1;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        char dir[] = {'U', 'R', 'D', 'L'};
    
        for (int k = 0; k < 4; k++) {
            int adjx = x + dx[k];
            int adjy = y + dy[k];
    
            if (adjx >= 0 && adjx < n && adjy >= 0 && adjy < n && !vis[adjx][adjy] && mat[adjx][adjy]) {
                t.push_back(dir[k]);
                dfs(mat, vis, adjx, adjy);
                t.pop_back();
            }
        }
        vis[x][y] = 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends