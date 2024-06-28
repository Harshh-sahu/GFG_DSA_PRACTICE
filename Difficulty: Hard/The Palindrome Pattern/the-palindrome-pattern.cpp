//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

   string pattern(vector<vector<int>> &arr) {
        
        string ans = "";
        for(int i = 0 ; i < arr.size(); i++){
            int p = 0;
            int q = arr[0].size()-1;
            while(p<q){
                if(arr[i][p] != arr[i][q]){
                    break;
                }
                p++;
                q--;
            }
            if(p>=q){
                ans += to_string(i);
                ans += " R";
                return ans;
            }
        }
        
        for(int i = 0 ; i < arr[0].size(); i++){
            int p = 0;
            int q = arr.size()-1;
            while(p<q){
                if(arr[p][i] != arr[q][i]){
                    break;
                }
                p++;
                q--;
            }
            if(p>=q){
                ans += to_string(i);
                ans += " C";
                return ans;
            }
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends