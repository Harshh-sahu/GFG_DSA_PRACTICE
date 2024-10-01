//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    vector<int>res;
	    for(int i = 2; i * i <= N;i++){
	        if(N%i==0)res.push_back(i);
	         while(N% i== 0){
	             N/=i;
	             
	         }
	    }
	    if(N!=1){
	        res.push_back(N); 
	        return res;
	    }
	    return res;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends