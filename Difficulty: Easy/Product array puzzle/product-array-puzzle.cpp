//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
int n = nums.size();

        vector<int long long>left(n,1);
        vector<int long long>right(n,1);
        vector<int long long>product(n);
        for(int i =1;i<n;i++){
           left[i]=left[i-1]*nums[i-1];
           
        }
           for(int i =n-2;i>=0;i--){
           right[i]=right[i+1]*nums[i+1];
           
        }
           for(int i =0;i<n;i++){
           product[i]=left[i]*right[i];
           
        }
        
        return product;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends