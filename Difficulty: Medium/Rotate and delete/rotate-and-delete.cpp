//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    // function to do operations of rotate and delete
    // v: input vector
    // n: size of vector
    int rotateDelete(vector<int> ans, int n) {
 int k=0;

        

        for(int i  = 0;i<n-1;i++)

        {

            long long temp = ans.back();

            ans.erase(ans.end()-1);

            ans.insert(ans.begin(),temp);

            k++;

            if(ans.size() < k)

            {

                ans.erase(ans.begin());

            }

            else

            {

               ans.erase(ans.end()-k);

            }

           

        }

        return ans[0];


    }
};


//{ Driver Code Starts.

int main() {

    int i, n, t, te;
    cin >> te;

    while (te--) {
        cin >> n;
        vector<int> v;
        for (i = 0; i < n; i++) {
            cin >> t;
            v.push_back(t);
        }
        Solution ob;
        cout << ob.rotateDelete(v, n) << endl;
    }

    return 0;
}
// } Driver Code Ends