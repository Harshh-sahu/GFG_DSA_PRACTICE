//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
   vector<int> answer;
         for(int i : arr) {
             if(answer.size()==0)
                     answer.push_back(i);
             else if((answer[answer.size()-1] >= 0 && i < 0) || (answer[answer.size()-1] < 0 && i >= 0)) {
                 answer.pop_back();
             } else {
                 answer.push_back(i);
             }
         }

         return answer;}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends