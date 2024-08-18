//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
                 int arrSum = 0, sum = 0, n = arr.size();
        
        // sum of total array..
        for(int i=0; i < n; i++) {
            arrSum += arr[i];
        }
        
        // sub array Sum..
        for(int i=0; i < n; i++) {
            sum += arr[i];
            if(sum * 2 == arrSum) {
                return true;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends