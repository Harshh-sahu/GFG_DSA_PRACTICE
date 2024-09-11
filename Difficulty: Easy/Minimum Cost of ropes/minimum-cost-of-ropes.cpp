//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    
    long long minCost(vector<long long>& arr) {
        
      long long n = arr.size();
      
      if(n==1) return 0;
      
      priority_queue<long long,vector<long long>,greater<long long>> pq;
      
      for(long long i=0;i<n;i++){
          pq.push(arr[i]);
      }
      
      long long sum =0;
      
      while(!pq.empty()){
          
          if(pq.size() ==1) {
              break;
          }
          
          long long a1 = pq.top();
          pq.pop();
          long long a2 = pq.top();
          pq.pop();
          long long a3 = a1+a2;
          sum += a3;
          pq.push(a3);
      }
      
      return sum;
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends