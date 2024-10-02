//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
       int sz = arr.size() / 2;
        
        for(int i=1; i<=sz && arr.size()!=1; i++){
            
            int n = arr.size();
            
            // Rotate array to right by one place
            int x = arr[n - 1];
            arr.insert(arr.begin(), x);
            arr.erase(arr.end() - 1);
            
            // Delete the (n - i + 1)th element
            arr.erase(arr.begin() + n - i);
            
        }
        
        return arr[0];
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends