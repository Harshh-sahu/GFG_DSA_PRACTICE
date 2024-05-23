//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends

   class node{
       public:
       int data;
       int row;
       int col;
       node(int d,int r,int c){
           data = d;
           row = r;
           col =c;
       }
   };
   
   class compare{
       public:
       bool operator()(node* a ,node*b){
           return a->data > b->data;
       }
   };
class Solution{
    public:
    
    pair<int,int> findSmallestRange(int nums[][N], int n, int k)
    {
          int mini = INT_MAX;
          int maxi = INT_MIN;
          
          priority_queue<node*,vector<node*>,compare>minHeap;
          
          for(int i = 0; i < k ;i++){
              int element = nums[i][0];
              maxi = max(maxi,element);
              mini = min(mini,element);
              minHeap.push(new node(element,i,0));
          }
          
          int ansStart = mini;
          int ansEnd = maxi;
          
          while(!minHeap.empty()){
              node* top = minHeap.top();
              int topElement = top->data;
              int topRow = top->row;
              int topCol = top->col;
              minHeap.pop();
              
              //mimi updated
              mini = topElement;
              
              int currRange = maxi-mini;
              int ansRange= ansEnd - ansStart;
              if(currRange < ansRange){
                  ansStart = mini;
                  ansEnd = maxi;
              }
              
             //checkk for new element in the same list'
             if(topCol + 1 < n){
                 maxi = max(maxi,nums[topRow][topCol+1]);
                 node* newnode = new node(nums[topRow][topCol+1],topRow,topCol+1);
                 minHeap.push(newnode);
                 
             }else{
                 break;
             }
          }
          
          return std::make_pair(ansStart,ansEnd);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends