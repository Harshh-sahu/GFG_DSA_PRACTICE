//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  static bool compare(pair<int,int>&a,pair<int,int>&b){
      if(a.second==b.second)
      return a.first<b.first;
      return a.second<b.second;
  }
    
    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)
        vec.push_back({start[i],end[i]});
        
        sort(vec.begin(),vec.end(),compare); // sort wrt to end time
      int ans=1;
      int prev=0;
       for(int i=1;i<n;i++){
           
           if(vec[i].first>vec[prev].second){
               prev=i;
               ans++;
           }
           
       }
       return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends