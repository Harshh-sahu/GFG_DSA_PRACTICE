//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
     int floor(int x, vector<int> &arr){
      int ans=-1;
      int n=arr.size();
      int s=0;int e=n-1;
      int mid;
      while(s<=e){
          mid=s+(e-s)/2;
          if(arr[mid]==x)return arr[mid];
          else if(arr[mid]<x){
              ans=arr[mid];
              s=mid+1;
          }
          else e=mid-1;
      }
      return (ans!=-1)?ans:-1;
      
      
  }
  int ceil(int x, vector<int> &arr){
      int ans=-1;
      int n=arr.size();
      int s=0;int e=n-1;
      int mid;
      while(s<=e){
          mid=s+(e-s)/2;
          if(arr[mid]==x)return arr[mid];
          else if(arr[mid]>x){
              ans=arr[mid];
              e=mid-1;
          }
          else s=mid+1;
      }
      return (ans!=-1)?ans:-1;
      
  }
  
  
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int f=floor(x,arr);
        int c=ceil(x,arr);
        return {f,c};
       
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends