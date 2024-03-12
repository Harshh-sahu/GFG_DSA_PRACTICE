//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
     long long ans = 0;
   void merge(long long *arr, long long s, long long e) {
    long long mid = (s + e) / 2;
    long long len1 = mid - s + 1;
    long long len2 = e - mid;
    long long *left = new long long[len1];
    long long *right = new long long[len2];

    // Copy values
    long long k = s;
    for (long long i = 0; i < len1; i++) {
        left[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (long long i = 0; i < len2; i++) {
        right[i] = arr[k];
        k++;
    }

    // Merge logic
    long long leftIndex = 0;
    long long rightIndex = 0;
    long long mainArrayIndex = s;
    while (leftIndex < len1 && rightIndex < len2) {
        if (left[leftIndex] <= right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        } else {
            ans += (len1 - leftIndex); // Update inversion count
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Copy remaining elements of left array
    while (leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    // Copy remaining elements of right array
    while (rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    delete[] left;
    delete[] right;
}
    void mergeSort(long long *arr,long long s,long long e)
{
    // base case
    // s==e -> songle element
    // s>e -> invalid elements
    if (s >= e)
    {
        return;
    }
     long long mid = (s + e) / 2;

    // lefft part sort krado recursion bhaiya

    mergeSort(arr, s, mid);

    // rigth part sort krado recursion bhaiya

    mergeSort(arr, mid + 1, e);

    // now merge 2 sorted array

    merge(arr, s, e);
}

    
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        long long s = 0;
    long long e = n - 1;
    
      mergeSort(arr, s, e);
    return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends