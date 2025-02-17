//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   vector<int> kLargest(vector<int>& arr, int k) {
        vector<int> ans(k);
        //k = k % arr.size();
        priority_queue<int,vector<int>,greater<int> >pq;
        for(int num : arr) {
            pq.push(num);
            if(pq.size() > k) pq.pop();
        }
        for(int i = k-1;i>=0;i--) {
            ans[i] = pq.top();
            pq.pop();
        }
        //reverse(ans.begin(), ans.end());
        return ans;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.kLargest(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends