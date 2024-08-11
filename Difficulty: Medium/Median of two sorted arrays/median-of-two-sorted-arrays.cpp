//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
 
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
            vector<int> v;
            for(int i=0;i<arr1.size();i++){
                v.push_back(arr1[i]);
             
            }
              for(int i=0;i<arr2.size();i++){
                v.push_back(arr2[i]);
             
            }
            
            int n = v.size()/2;
            sort(v.begin(),v.end());
            return v[n-1]+v[n];
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends