//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int A[], int n)
    {
        // Your code here
        unordered_map<int,int>map;
        int ans = 0 ;
        int csum = 0;
        
        for(int i = 0 ; i < n ; ++i){
          
                int val = A[i]==0 ? -1 : 1;
                csum += val;
                if(csum == 0){
                    ans = max(ans,i+1);
                }
                else if(map.find(csum) == map.end()){
                        map[csum] = i;
                }else{
                   ans = max(ans,i-map[csum]);
                }
            
        }
        return ans;
    
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends