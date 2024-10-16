//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   bool checkSorted(vector<int> &nums) {
        int i=0;
        int n=nums.size();
        int swaps=0;
        while(i<n){
            if(nums[i]==i+1){
                i++;
            }
            else if(nums[i]==nums[nums[i]-1]){
                i++;
            }
            else{
                swap(nums[i],nums[nums[i]-1]);
                swaps++;
                if(swaps>2)return false;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                return false;
            }
        }
        if(swaps==2 || swaps==0)return true;
        return false;
    }


};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends