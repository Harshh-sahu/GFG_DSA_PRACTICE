//{ Driver Code Starts
// Initial Template for C++

// C++ program to merge two max heaps.

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    
    void heapify(vector<int>&v,int i , int n ){
        while(true){
            int left = 2*i+1;
            int right = 2*i + 2;
            int swapIndex = i;
            if(left < n && v[left] > v[i]){
                swapIndex = left;
            }
            
            if(right < n && v[right] > v[swapIndex]){
                swapIndex = right;
            }
            if(swapIndex == i){
                break;
                
            }
            
            swap(v[i],v[swapIndex]);
            i = swapIndex;
            
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
               //step 1 merge two vectors;
               
               vector<int>c(a.begin(),a.end());
               c.insert(c.end(),b.begin(),b.end());
               //2 lets heapigy vector c
               
               for(int i =(c.size()/2)-1;i>=0;--i){
                   heapify(c,i,c.size());
               }
               
               return c;
              
    }
};

//{ Driver Code Starts.

bool isMerged(vector<int> &arr1, vector<int> &arr2, vector<int> &merged){
    if (arr1.size() + arr2.size() != merged.size()){
        return false;
    }
    arr1.insert(arr1.end(),arr2.begin(),arr2.end());
    sort(arr1.begin(),arr1.end());
    vector<int> mergedCopy =merged;
    sort(mergedCopy.begin(),mergedCopy.end());
    if (arr1 != mergedCopy){
        return false;
    }
    for(int i = 1; i<merged.size(); i++){
        if(merged[i] > merged[(i-1)/2])
            return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        vector<int> a(n,0),b(m,0);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<int> merged, copyA = a, copyB = b;
        Solution obj;
        merged = obj.mergeHeaps(a, b, n, m);
        bool flag = isMerged(copyA, copyB, merged);
        if(flag == false) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}

// } Driver Code Ends