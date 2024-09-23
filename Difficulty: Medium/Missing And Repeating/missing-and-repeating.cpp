//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
             int a=0;
        long long s=accumulate(begin(arr),end(arr),0ll);
        long long n=arr.size();
        for(int &x:arr){
            if(arr[abs(x)-1]<0){ a=abs(x);break;}
            else arr[abs(x)-1]*=-1;
        }
        long long x=n*(n+1)/2;
        int b=x-s+a;
        return{a,b};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends