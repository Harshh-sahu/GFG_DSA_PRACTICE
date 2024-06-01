//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
      int recursion(int weight[],int value[],int index,int capacity){
          if(index == 0){
              if(weight[0] <= capacity){
                  return value[0];
              }else{
                  return 0;
              }
          }
          
          int include = 0;
          if(weight[index]<=capacity){
              include = value[index] + recursion(weight, value, index - 1, capacity - weight[index]);
          }
          
           int exclude = 0 + recursion(weight, value, index - 1, capacity);
        int ans = max(include, exclude);

    return ans;
}



int dpsolution(int weight[],int value[],int index,int capacity,vector<vector<int>>&dp){
     if(index == 0){
              if(weight[0] <= capacity){
                  return value[0];
              }else{
                  return 0;
              }
          }
          if(dp[index][capacity] != -1){
              return dp[index][capacity];
          }
          
          int include = 0;
          if(weight[index]<=capacity){
              include = value[index] + dpsolution(weight, value, index - 1, capacity - weight[index],dp);
          }
          
           int exclude = 0 + dpsolution(weight, value, index - 1, capacity,dp);
        dp[index][capacity]= max(include, exclude);

    return  dp[index][capacity];
}
    
    
    int knapSack(int capacity, int weight[], int value[], int n) 
    { 
        vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
       int ans = dpsolution(weight,value,n-1,capacity,dp);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends