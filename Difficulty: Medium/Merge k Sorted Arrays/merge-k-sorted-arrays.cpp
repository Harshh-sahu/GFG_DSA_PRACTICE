#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    class Info {
    public:
        int data;
        int rowIndex;
        int colIndex;
        Info(int a, int b, int c) {
            data = a;
            rowIndex = b;
            colIndex = c;
        }
    };

    class compare {
    public:
        bool operator()(Info* a, Info* b) {
            return a->data > b->data; // Min-heap
        }
    };

    void mergek(vector<vector<int>>& arr, int n, int k, vector<int>& ans) {
        priority_queue<Info*, vector<Info*>, compare> pq;

        // Push first element of each row into pq
        for (int row = 0; row < k; row++) {
            if (!arr[row].empty()) {
                pq.push(new Info(arr[row][0], row, 0));
            }
        }

        while (!pq.empty()) {
            Info* top = pq.top();
            pq.pop();

            ans.push_back(top->data);

            int nextCol = top->colIndex + 1;
            int row = top->rowIndex;

            if (nextCol < arr[row].size()) {
                pq.push(new Info(arr[row][nextCol], row, nextCol));
            }

            delete top; // avoid memory leak
        }
    }

    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        vector<int> ans;
        int n = arr.size();
        mergek(arr, n, K, ans);
        return ans;
    }
};
