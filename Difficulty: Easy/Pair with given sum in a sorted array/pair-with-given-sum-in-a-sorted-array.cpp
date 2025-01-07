//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int num : arr) {
        int complement = target - num;

        // If the complement exists in the map, it forms a valid pair
        if (freq[complement] > 0) {
            count += freq[complement];
        }

        // Increment the frequency of the current number
        freq[num]++;
    }

    return count;
}
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends