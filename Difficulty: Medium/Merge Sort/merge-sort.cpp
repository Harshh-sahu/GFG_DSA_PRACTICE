//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    void merge(vector<int>&arr,int start,int end){
        int mid = (start+end)/2;
        int len1 = mid-start+1;
        int len2 = end-mid;
        
        int* left = new int[len1];
        int* right = new int[len2];
        int k = start;
     for(int i = 0 ; i < len1;i++){
         left[i] = arr[k++];
     }
     k = mid+1;
      for(int i = 0 ; i < len2;i++){
         right[i] = arr[k++];
     }
     
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;
    
    
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainIndex++]= left[leftIndex++];
        }else{
            arr[mainIndex++]= right[rightIndex++];
        }
    }
    
    while(leftIndex<len1){
                    arr[mainIndex++]= left[leftIndex++];

    }
    while(rightIndex<len2){
                    arr[mainIndex++]= right[rightIndex++];

    }
     
     delete[] left;
     delete[] right;
     
    }
  
  
    void mergeSort(vector<int>& arr, int start, int end) {
          
          if(start>= end)return;
          
          int mid = (start+end)/2;
          
          mergeSort(arr,start,mid);
          
          mergeSort(arr,mid+1,end);
          
          merge(arr,start,end);
          
          
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends