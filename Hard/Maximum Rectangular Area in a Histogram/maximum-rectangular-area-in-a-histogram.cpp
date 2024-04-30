//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    vector<long long> prevSmallerElement(vector<long long>& input){
        stack<long long>s;
        s.push(-1);
        vector<long long >ans(input.size());
        for(int i = 0 ; i < input.size();i++){
            long long curr = input[i];
            
            while(s.top()!= -1 && input[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    
    
    vector<long long> nextSmaller(vector<long long> &input){
        stack<long long> s;
        s.push(-1);
        vector<long long >ans(input.size());
        for(int i = input.size()-1 ; i >= 0 ;i--){
            long long curr = input[i];
            while(s.top() != -1 && input[s.top()]>= curr){
                s.pop();
            }
                ans[i] = s.top();

            s.push(i);
        }
        return ans;
    }
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long>height(n);
        for(int i = 0 ; i < n;i++){
            height[i] = arr[i];
        }
        
        
        vector<long long>prev = prevSmallerElement(height);
        vector<long long>next = nextSmaller(height);
        long long size = height.size();
        long long maxArea = INT_MIN;
        for(int i = 0 ; i < height.size();i++){
            long long length = height[i];
            if(next[i] == -1){
                next[i] = size;
                
            }
            long long width = next[i] - prev[i] -1;
            long long area = length * width;

            maxArea = max(maxArea,area);
        }
        
        return maxArea;
        
     
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends