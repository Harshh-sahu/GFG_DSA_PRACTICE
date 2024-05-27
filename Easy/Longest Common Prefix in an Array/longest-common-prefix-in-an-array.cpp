//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans ="";
        
        for(int i=0; i<arr[0].size(); i++)
        {
            char ch = arr[0][i];
            bool correct = true;
            
            for(int j=1; j<N; j++)
            {
                if(arr[j].size()<i || ch !=arr[j][i])
                {
                    correct = false;
                    break;
                }
            }
            if(correct)
            ans += ch;
            else
            break;
        }
        if(ans.empty())
        return "-1";
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends