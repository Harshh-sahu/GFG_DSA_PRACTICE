//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 void combinationSum2_helper(vector<int>& candidates,vector<vector<int>>&ans,vector<int>&v,int target,int index){
      // base case
    if (target == 0)
    {
        ans.push_back(v);
        return;
    }
    if (target < 0)
    {
        return;
    }
      for(int i = index;i < candidates.size();i++){
           if(i > index && candidates[i]==candidates[i-1]){
                continue;
                
           
       }
         v.push_back(candidates[i]);
         combinationSum2_helper(candidates,ans,v,target-candidates[i],i+1);
         v.pop_back();
    
 }}
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
     sort(candidates.begin(),candidates.end());
     
     vector<vector<int>>ans;
     vector<int>v;
     
     combinationSum2_helper(candidates,ans,v,target,0);
     return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends