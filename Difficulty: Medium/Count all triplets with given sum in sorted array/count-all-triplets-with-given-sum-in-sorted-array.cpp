//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        unordered_map<int,int>freq;
        for(int e:arr){
            freq[e]++;
        }
        
        int ans = 0;
        for(int i = 0 ; i < arr.size();i++){
            freq[arr[i]]--;
            for(int j = 0; j < i;j++){
                int lookfor = target-arr[i]-arr[j];
                if(freq.find(lookfor) != freq.end()){
                    ans+= freq[lookfor];
                }
            }
        }
     return ans;   
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends