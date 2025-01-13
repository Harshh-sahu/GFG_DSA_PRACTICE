//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
    int s=0;//here we use two pointer approch; 
        int e=arr.size()-1;
        int maxval=INT_MIN;
        while(s<=e)
        {
            int val=(e-s)*min(arr[s],arr[e]);
            maxval=max(maxval,val);
            if(arr[s]<arr[e])//its the condition for the movemment of the two pointer to find
            //max height
            {
                s++;
            }
            else
            {
                e--;
            }
        }
        return maxval;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends