//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        deque<int>dq;
        vector<int>ans;

        //first winDOW traverse
        for(int i = 0;i < k ;i++){
            //chote element remove krdo
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }

            dq.push_back(i);
        }

        //store answer for first window 

        ans.push_back(nums[dq.front()]);

        //remaining window ko process krna jai

        for(int i=k; i<nums.size();i++){
            //out of window wale element ko remove krdo
            if(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
            }
            //ab firse current element k liye chote element ko remove krne aji
             while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }

            dq.push_back(i);
            //current window ka answer 
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends