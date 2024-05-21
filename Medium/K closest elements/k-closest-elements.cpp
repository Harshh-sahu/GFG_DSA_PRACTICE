//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
public:
    int findFloor(const std::vector<int>& arr, int n, int x) {
        int start = 0;
        int end = n - 1;
        int ans = -1; 

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x) {
                return mid; 
            } else if (arr[mid] < x) {
                ans = mid; 
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }

    std::vector<int> printKClosest(std::vector<int> arr, int n, int k, int x) {
        int index = findFloor(arr, n, x);
        int start = index; 
        int end = index + 1; 
        std::vector<int> ans;

        // Skip the element if it's equal to x
        if (index != -1 && arr[index] == x) {
            start = index - 1;
        }

        while (k > 0 && start >= 0 && end < n) {
            if (abs(x - arr[start]) < abs(x - arr[end])) {
                ans.push_back(arr[start--]);
            } else if (abs(x - arr[start]) > abs(x - arr[end])) {
                ans.push_back(arr[end++]);
            } else {
                if (arr[start] > arr[end]) {
                    ans.push_back(arr[start--]);
                } else {
                    ans.push_back(arr[end++]);
                }
            }
            k--;
        }

        while (k > 0 && start >= 0) {
            ans.push_back(arr[start--]);
            k--;
        }

        while (k > 0 && end < n) {
            ans.push_back(arr[end++]);
            k--;
        }

        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends