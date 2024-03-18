//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
  static int comp(string s,string t){
       string str = s.append(t);
       string st= t.append(s);
       return str.compare(st) > 0 ? 1:0;
   }
	string printLargest(int n, vector<string> &arr) {
	     
	     
	     sort(arr.begin(),arr.end(),comp);
	     string ans ="";
	     for(int i = 0 ; i < n ; i++){
	         ans.append(arr[i]);
	     }
	   
	 
	  return ans;
	  
	  
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends