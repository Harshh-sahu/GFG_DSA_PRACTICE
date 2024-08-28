//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
   vector<int> sortByFreq(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        vector<pair<int,int>> t;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            t.push_back({it.second,it.first});
        }
        sort(t.begin(),t.end(),[](const pair<int,int>& a, pair<int,int>& b){
            if(a.first!=b.first){
                return a.first>b.first;
            }
            return a.second<b.second;
        });
        for(int i=0;i<t.size();i++){
            while(t[i].first--)
            ans.push_back(t[i].second);
        }
        return ans;
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
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends