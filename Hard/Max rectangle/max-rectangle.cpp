//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/
class Solution{
private:
    vector<int> prevSmallerElement(vector<int>& input) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(input.size());

        for(int i = 0 ; i < input.size() ; i++) {
            int curr = input[i];
            while (s.top() != -1 && input[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }   
        return ans;
    }

    vector<int> nextSmaller(vector<int>& input) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(input.size());

        for(int i = input.size()-1; i >= 0; i--) {
            int curr = input[i];
            while (s.top() != -1 && input[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }   
        return ans;
    }     

    int largestRectangleArea(vector<int>& height, vector<int>& prev, vector<int>& next) {
        int size = height.size();
        int maxArea = INT_MIN;

        for(int i = 0; i < height.size(); i++) {
            int length = height[i];
            if(next[i] == -1) {
                next[i] = size;
            }
            int width = next[i] - prev[i] - 1;
            int area = length * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }

public:
    int maxArea(int matrix[MAX][MAX], int n, int m) {
        vector<vector<int>> v(n, vector<int>(m));

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                v[i][j] = matrix[i][j];
            }
        }

        vector<int> prev = prevSmallerElement(v[0]);
        vector<int> next = nextSmaller(v[0]);
        int area = largestRectangleArea(v[0], prev, next);

        for(int i = 1; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(v[i][j]) {
                    v[i][j] += v[i-1][j];
                } else {
                    v[i][j] = 0;
                }
            }
            prev = prevSmallerElement(v[i]);
            next = nextSmaller(v[i]);
            area = max(area, largestRectangleArea(v[i], prev, next));
        }
        return area;
    }
};



//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends