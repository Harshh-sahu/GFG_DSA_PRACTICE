//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int K) {
            
            deque<long long int>dq;
            vector<long long>ans;
            
            //procexss kro first window of k size
            
            for(int i =0 ; i < K ; i++){
                if(A[i] < 0){
                    dq.push_back(i);
                    
                }
            }
            
            //store answer of first k sized window
            if(dq.size() > 0){
                ans.push_back(A[dq.front()]);
                
            }else{
                ans.push_back(0);
            }
            
            //procees for remaining window
        for(int i =K ; i < n ; i++){
            //removal 
            if(!dq.empty() && i - dq.front() >= K){
                dq.pop_front();
            }
            //additiom
            if(A[i]<0){
                dq.push_back(i);
            }
            //ans storw krdo
              if(dq.size() > 0){
                ans.push_back(A[dq.front()]);
                
            }else{
                ans.push_back(0);
            }
            
        }
            return ans;
            
                                                 
 }