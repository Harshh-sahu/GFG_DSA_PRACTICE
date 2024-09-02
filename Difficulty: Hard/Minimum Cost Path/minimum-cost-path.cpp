//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid)

 {
        // Code here
        int n=grid.size();
            priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        pq.push({grid[0][0],{0,0}});
        int dr[]={-1,0,0,1};
        int dc[]={0,-1,1,0};
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        dist[0][0]=grid[0][0];
        while(!pq.empty())
        {
            int dis=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
            for(int i=0;i<4;i++)
            {
                int nRow=row+dr[i];
                int nCol=col+dc[i];
                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < n) 
                {
                    if(dis+grid[nRow][nCol]<dist[nRow][nCol])
                    {
                        dist[nRow][nCol]=dis+grid[nRow][nCol];
                        pq.push({dist[nRow][nCol],{nRow,nCol}});
                    }
                }
            }
        }
        return dist[n-1][n-1];
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends