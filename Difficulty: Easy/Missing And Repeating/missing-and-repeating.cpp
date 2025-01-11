//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
       
     unordered_map<int,int> mp;
        vector<int> res;
        for(int num:arr){
            mp[num]++;
        }
        int n = arr.size();
        for(auto it:mp){
            if(it.second == 2){
                res.push_back(it.first);
                break;
            }
        }
        for(int i=1;i<=n;i++){
            if(mp.find(i) == mp.end()){
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends