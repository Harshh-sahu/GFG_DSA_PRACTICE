//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
 string smallestNumber(int s, int d) {
        if(s > 9*d) {
            return "-1";
        } 
        string res = "1" + string(d-1, '0');
        s--;
        if(s == 0) {
            return res;
        }
        for(int i = d-1; s > 0; --i) {
            if(s > 9) {
                res[i] += 9;
                s -= 9;
            }
            else {
                res[i] += s;
                s = 0;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends