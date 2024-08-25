//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		
		int bs(int arr[], int target,int n) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (target == arr[mid]) {
            ans = mid;
            s = mid +1; // Look on the left side for the first occurrence
        } else if (target > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}


int ls(int arr[], int target,int n) {
    int s = 0;
    int e = n-1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (target == arr[mid]) {
            ans = mid;
            e = mid - 1; // Look on the left side for the first occurrence
        } else if (target > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}
	int count(int arr[], int n, int target) {
	     int ans = bs(arr, target,n);
    int ans1 = ls(arr, target,n);

     if(ans == -1 && ans1== -1){
        return 0;
     }else{
        return ans-ans1 +1;
     }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends