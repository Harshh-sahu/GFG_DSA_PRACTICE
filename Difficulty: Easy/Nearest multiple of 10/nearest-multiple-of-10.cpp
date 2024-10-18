//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        string modified = str;
        int carry = 4;
        for(int i=modified.size()-1;i>=0;i--)
        {
            int sum = int(modified[i]-'0')+carry;
            modified[i] = char((sum%10) + '0');
            carry = sum/10;
            if(carry == 0)
                break;
        }
        modified[modified.size()-1] = '0';
        return modified;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends