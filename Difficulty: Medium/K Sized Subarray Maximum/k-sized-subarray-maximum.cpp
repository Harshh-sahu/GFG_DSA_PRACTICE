//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
  vector<int> max_of_subarrays(int k, vector<int> &arr) {
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<k;i++){
         pq.push({arr[i],i});   
        }
        ans.push_back(pq.top().first);
        for(int i=k;i<arr.size();i++){
            pq.push({arr[i],i});
            //agar pq ka top ka index agar i-k se kam hai matlab wo k size frame ka part
            //ni hai so pop them
           while(pq.top().second<=i-k){
               pq.pop();
           }
           ans.push_back(pq.top().first);
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

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends