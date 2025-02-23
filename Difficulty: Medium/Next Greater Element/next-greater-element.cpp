//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1); // Initialize all elements to -1
        stack<int> st;          // Stack to track indices
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Pop elements that are smaller or equal to the current element
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            
            // If stack is not empty, the top element is the next greater
            if (!st.empty()) {
                ans[i] = arr[st.top()];
            }
            
            // Push the current index onto the stack
            st.push(i);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after reading t
    while (t--) {
        vector<int> a;
        string input;

        // Reading the entire input line for the array
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.nextLargerElement(a);

        // Print the result in the required format
        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends