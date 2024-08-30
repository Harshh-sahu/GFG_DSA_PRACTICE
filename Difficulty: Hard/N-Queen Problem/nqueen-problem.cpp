//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> upperLeftDiagonalCheck;
    unordered_map<int, bool> bottomLeftDiagonalCheck;

    void storeSolution(vector<vector<int>> &board, int n, vector<vector<int>> &ans) {
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 1) {
                    temp.push_back(j + 1);
                }
            }
        }
        ans.push_back(temp);
    }

    bool isSafe(int row, int col, vector<vector<int>> &board, int n) {
        if (rowCheck[row] || upperLeftDiagonalCheck[n - 1 + col - row] || bottomLeftDiagonalCheck[row + col]) {
            return false;
        }
        return true;
    }

    void solve(vector<vector<int>> &board, int col, int n, vector<vector<int>> &ans) {
        // base case
        if (col >= n) {
            storeSolution(board, n, ans);
            return;
        }
        // 1 case solve krdo baki recursion sambhal lenga
        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board, n)) {
                // rakhdo
                board[row][col] = 1;
                rowCheck[row] = true;
                upperLeftDiagonalCheck[n - 1 + col - row] = true;
                bottomLeftDiagonalCheck[row + col] = true;

                // recursion solution layega
                solve(board, col + 1, n, ans);

                // backtracking
                board[row][col] = 0;
                rowCheck[row] = false;
                upperLeftDiagonalCheck[n - 1 + col - row] = false;
                bottomLeftDiagonalCheck[row + col] = false;
            }
        }
    }

    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<vector<int>> board(n, vector<int>(n, 0));
        int col = 0;
        solve(board, col, n, ans);
        sort(ans.begin(), ans.end());
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
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends