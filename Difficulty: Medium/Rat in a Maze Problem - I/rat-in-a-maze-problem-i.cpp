//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  
  
bool isSafe(vector<vector<int>> &maze, int newx, int newy, int row, int col, vector<vector<bool>> &visited) {
    return (newx >= 0 && newx < row && newy >= 0 && newy < col && maze[newx][newy] == 1 && !visited[newx][newy]);
}

void print(vector<vector<int>> &maze, int row, int col, int srcx, int srcy, string &output, vector<vector<bool>> &visited, vector<string> &ans) {
    if (srcx == row - 1 && srcy == col - 1) {
        ans.push_back(output);
        return;
    }

    // Up
    int newx = srcx - 1, newy = srcy;
    if (isSafe(maze, newx, newy, row, col, visited)) {
        visited[newx][newy] = true;
        output.push_back('U');
        print(maze, row, col, newx, newy, output, visited, ans);
        output.pop_back();
        visited[newx][newy] = false;
    }

    // Right
    newx = srcx, newy = srcy + 1;
    if (isSafe(maze, newx, newy, row, col, visited)) {
        visited[newx][newy] = true;
        output.push_back('R');
        print(maze, row, col, newx, newy, output, visited, ans);
        output.pop_back();
        visited[newx][newy] = false;
    }

    // Down
    newx = srcx + 1, newy = srcy;
    if (isSafe(maze, newx, newy, row, col, visited)) {
        visited[newx][newy] = true;
        output.push_back('D');
        print(maze, row, col, newx, newy, output, visited, ans);
        output.pop_back();
        visited[newx][newy] = false;
    }

    // Left
    newx = srcx, newy = srcy - 1;
    if (isSafe(maze, newx, newy, row, col, visited)) {
        visited[newx][newy] = true;
        output.push_back('L');
        print(maze, row, col, newx, newy, output, visited, ans);
        output.pop_back();
        visited[newx][newy] = false;
    }
}

vector<string> findPath(vector<vector<int>> &maze) {
    int row = maze.size();
    if (row == 0) return {}; // Handle edge case of empty maze

    int col = maze[0].size();
    string output = "";
    vector<string> ans;
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0) {
        cout << "NO PATH EXIST" << endl;
        return ans;
    } else {
        visited[0][0] = true;
        print(maze, row, col, 0, 0, output, visited, ans);
    }
    
    return ans;
}
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends