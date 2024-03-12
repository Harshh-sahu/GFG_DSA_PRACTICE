//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    vector<vector<long long>> matrixMul(const vector<vector<long long>>& a, const vector<vector<long long>>& b, long long m) {
        vector<vector<long long>> res(a.size(),vector<long long>(b[0].size(),0));
        for(int i=0; i<a.size(); i++) {
            for(int j=0; j<b[0].size(); j++) {
                for(int k=0; k<b.size(); k++) {
                    res[i][j]=(res[i][j]%m + (a[i][k]%m)*(b[k][j]%m))%m;
                }
            }
        }
        return res;
    }
    vector<vector<long long>> matrixExp(vector<vector<long long>>& base, long long n, long long m) {
        vector<vector<long long>> res(base.size(),vector<long long>(base.size(),0));
        for(long long i=0; i<base.size(); i++) {res[i][i]=1;}
        while(n>0) {
            if(n&1) {
                res=matrixMul(res,base,m);
            }
            base=matrixMul(base,base,m);
            n>>=1;
        }
        return res;
    }
public:
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        vector<vector<long long>> vBase= {
            {1},    // |g(n-1)|
            {1},    // |g(n-2)|
            {1}     // constant state
        };
        if(n==1 || n==2) {
            return vBase[vBase.size()-n-1][0];
        }
        vector<vector<long long>> transform= {
            {a,b,c},
            {1,0,0},
            {0,0,1}
        };
        vector<vector<long long>> transformer=matrixExp(transform,n-2,m);
        vector<vector<long long>> res=matrixMul(transformer,vBase,m);
        return res[0][0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,n,m;
        
        cin>>a>>b>>c>>n>>m;

        Solution ob;
        cout << ob.genFibNum(a,b,c,n,m) << endl;
    }
    return 0;
}
// } Driver Code Ends