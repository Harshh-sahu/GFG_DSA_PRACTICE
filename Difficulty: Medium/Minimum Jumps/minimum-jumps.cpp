//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:

int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 0;   
        if (arr[0] == 0) return -1; 
    
        int ans = 0;
        int i = 0, jump = arr[0]; 
        
        while (i < n) {
            ans++; 
    
            if (i + jump >= n - 1) return ans; 
    
            int maxi = 0, idx = -1;
            for (int j = i + 1; j <= i + jump && j < n; ++j) {
                if (j + arr[j] > maxi) {
                    maxi = j + arr[j];
                    idx = j;
                }
            }
            
            if (idx == -1 || i == idx) return -1; 
            
            i = idx;    
            jump = arr[i];  
        }
        
        return -1; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends