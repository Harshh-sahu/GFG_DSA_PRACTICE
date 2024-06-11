//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
       vector<pair<int,int>>vp;
       for(int i = 0;i<n;i++){
           int a  = arr[i] - brr[i];
           vp.push_back({a,i});
       }
       
       sort(vp.begin(),vp.end());
       
       long long res = 0;
       
       for(int i = n-1;i>=0;i--){
           if(vp[i].first > 0 && x > 0){
               res += arr[vp[i].second];
               x--;
           }
           
           else if(vp[i].first <= 0  && i+1 > y ){
               res += arr[vp[i].second];
           }
           
           else {
               res += brr[vp[i].second];
           }
       }
       
       return res;
    }


};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends