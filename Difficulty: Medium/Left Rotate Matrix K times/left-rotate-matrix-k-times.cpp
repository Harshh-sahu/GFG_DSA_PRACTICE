//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void reverse_k(int i, int j, vector<int>& mat1){
        while(i<j){
            swap(mat1[i],mat1[j]);
            i++;
            j--;
        }
    }
    void rotate(int k, vector<int>mat1, vector<vector<int>>&ans){
        int n=mat1.size();
        k=k%n;
        reverse_k(0, k-1,mat1);
        reverse_k(k,n-1,mat1);
        reverse_k(0,n-1,mat1);
        ans.push_back(mat1);
    }
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        vector<vector<int>>ans;
        for(auto it:mat){
            rotate(k,it,ans);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends