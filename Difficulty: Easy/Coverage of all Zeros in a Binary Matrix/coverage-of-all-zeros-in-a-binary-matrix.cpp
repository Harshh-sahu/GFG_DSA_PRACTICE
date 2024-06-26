//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int FindCoverage(vector<vector<int>>&matrix){
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!matrix[i][j]){
                    if(i>0) ans+=matrix[i-1][j];
                    if(i<n-1) ans+=matrix[i+1][j];
                    if(j>0) ans+=matrix[i][j-1];
                    if(j<m-1) ans+=matrix[i][j+1];
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		Solution obj;
		int ans = obj.FindCoverage(matrix);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends