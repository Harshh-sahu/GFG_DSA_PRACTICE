//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
   string rremove(string s) {
        // code here
        string str;
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i]==s[i+1]){
                int j = i+2;
                while(j<n&&s[i]==s[j]){
                    j++;
                }
                j--;
                i=j;
            }else{
                str.push_back(s[i]);
            }
        }
        if(s==str){
            return str;
        }
        return rremove(str);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends