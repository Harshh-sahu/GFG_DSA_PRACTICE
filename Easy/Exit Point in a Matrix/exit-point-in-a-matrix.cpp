//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
         int i =0, j = 0 , previ = 0, prevj = 0,face = 0 ;
         while(i < n and i >=0 and j < m and j >= 0){
             previ = i ; 
             prevj = j ;
             if(matrix[i][j]){
                 matrix[i][j]=0;
                 if(face== 0 ){
                     i++;
                     face=1;
                     
                 }else if(face == 1){
                     j--;
                     face = 2;
                 }else if(face== 2){
                     i--;
                     face = 3;
                 }else{
                    j++;
                    face = 0;
                 }
             }else{
                  if(face== 0 ){
                     j++;
                   
                     
                 }else if(face == 1){
                     i++;
                 
                 }else if(face== 2){
                     j--;
                    
                 }else{
                i--;
                  
                 }
             }
         }
         return {previ,prevj};
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends