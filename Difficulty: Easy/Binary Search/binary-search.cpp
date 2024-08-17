//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
 
class Solution {
  public:
  int bs(vector<int>&arr,long long low,long long high,int k){
      if(low> high)return -1;
      long long mid = low+(high-low)/2;
      if(arr[mid]==k)return mid;
      else if(k > arr[mid]) return bs(arr,mid+1,high,k);
      return bs(arr,low,mid-1,k);
      
  }
    int binarysearch(vector<int> &arr, int k) {



return bs(arr,0,arr.size()-1,k);


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends