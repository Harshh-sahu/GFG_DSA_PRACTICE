//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(const vector<int>& arr) {
    for (int num : arr)
        printf("%d ", num);
    printf("\n");
}


// } Driver Code Ends
class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
void quickSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int p = partition(arr, low, high);

    // Sort elements before and after partition
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Choose the first element as pivot
    int i = low + 1;      // Start from the element after the pivot
    int j = high;         // Start from the end of the array

    while (i <= j) {
        // Find the next element larger than or equal to pivot from the left
        while (i <= j && arr[i] <= pivot) i++;
        // Find the next element smaller than pivot from the right
        while (i <= j && arr[j] > pivot) j--;

        // Swap elements if `i` is less than `j`
        if (i < j) swap(arr[i], arr[j]);
    }

    // Swap the pivot with the element at index `j` to place it in the correct position
    swap(arr[low], arr[j]);

    // Return the pivot index
    return j;
}


};

//{ Driver Code Starts.

int main() {

    int T;
    scanf("%d", &T);
    getchar(); // to consume newline after T

    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.quickSort(arr, 0, arr.size() - 1);
        printArray(arr);
    }

    return 0;
}

// } Driver Code Ends