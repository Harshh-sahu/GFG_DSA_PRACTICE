//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    
long long mergeAndCount(vector<int>& arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Temporary arrays for left and right subarrays
    vector<int> left(len1), right(len2);

    // Copy data to left and right arrays
    int k = s;
    for (int i = 0; i < len1; i++) {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = arr[k++];
    }

    // Merge the two arrays back into the original array
    int leftIndex = 0, rightIndex = 0, mainIndex = s;
    long long inversionCount = 0;

    while (leftIndex < len1 && rightIndex < len2) {
        if (left[leftIndex] <= right[rightIndex]) {
            arr[mainIndex++] = left[leftIndex++];
        } else {
            arr[mainIndex++] = right[rightIndex++];
            // All remaining elements in the left array contribute to inversions
            inversionCount += (len1 - leftIndex);
        }
    }

    // Copy remaining elements of left array
    while (leftIndex < len1) {
        arr[mainIndex++] = left[leftIndex++];
    }

    // Copy remaining elements of right array
    while (rightIndex < len2) {
        arr[mainIndex++] = right[rightIndex++];
    }

    return inversionCount;
}

long long mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return 0;
    }

    int mid = (start + end) / 2;

    long long invCount = 0;
    invCount += mergeSort(arr, start, mid);
    invCount += mergeSort(arr, mid + 1, end);
    invCount += mergeAndCount(arr, start, end);

    return invCount;
}

long long inversionCount(vector<int>& arr) {
    int n = arr.size();
    return mergeSort(arr, 0, n - 1);
}

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends