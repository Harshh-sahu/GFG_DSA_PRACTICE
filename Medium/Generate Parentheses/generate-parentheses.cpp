//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(vector<string>& ans, int n, int open, int close, string output) {
        // base case;

        if (open == 0 && close == 0) {
            ans.push_back(output);
            return;
        }

        // include open bracket
        if (open > 0) {
            output.push_back('(');
            solve(ans, n, open - 1, close, output);

            // backtrack
            output.pop_back();
        }

        // include close bracket
        if (close > open) {
            output.push_back(')');
            solve(ans, n, open, close - 1, output);

            // backtrack
            output.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
         vector<string> ans;
        int open = n;
        int close = n;
        string output = "";
        solve(ans, n, open, close, output);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends