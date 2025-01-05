//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find pair with maximum sum
   int pairWithMaxSum(vector<int> &arr) {
        int sm=0,n=arr.size();
        if(n==2)return arr[0]+arr[1];
        for(int i=1;i<n-1;i++){
            sm=max(sm,arr[i]+max(arr[i-1],arr[i+1]));
        }
        return sm;
    }

};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends