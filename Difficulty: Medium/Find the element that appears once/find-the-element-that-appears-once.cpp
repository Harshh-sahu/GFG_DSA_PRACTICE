//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
       
       int s = 0 ; 
       int e = n-1;
    while(s <=e){
        int mid = s+(e-s)/2;
        
        if(s==e)return arr[s];
        
        if(mid%2 ==0){
            
            if(arr[mid]==arr[mid+1]){
                s = mid+2;
            }else{
                e = mid;
            }
            
        }else{
            
            if(arr[mid]==arr[mid-1]){
                s= mid+1;
            }else{
                e = mid-1;
            }
            
        }
        
        
        
        
        
        
        
    }
    return -1;
       
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t, len;
    cin >> t;
    while (t--) {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.search(len, arr) << '\n';
    }
    return 0;
}

// } Driver Code Ends