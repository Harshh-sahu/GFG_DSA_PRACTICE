//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*You are required to complete this method*/
class Solution {
  public:
    // Function to calculate the maximum area of a rectangle
    // in the given matrix.
    
   vector<int> nextSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, n); // Default to n (no smaller element)
        stack<int> st;
        
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    // Find the index of the previous smaller element for each bar
    vector<int> prevSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1); // Default to -1 (no smaller element)
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    // Function to find the largest rectangular area in a histogram
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if (n == 0) return 0;

        vector<int> next = nextSmaller(heights);
        vector<int> prev = prevSmaller(heights);

        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = next[i] - prev[i] - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }

    int maxArea(vector<vector<int>> &v) {
         int n = v.size();
        if (n == 0) return 0;
        int m = v[0].size();
         int area = largestRectangleArea(v[0]);

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v[i][j] != 0) {
                    v[i][j] += v[i - 1][j];
                } else {
                    v[i][j] = 0;
                }
            }
            area = max(area, largestRectangleArea(v[i]));
        }
        return area;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(mat) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends