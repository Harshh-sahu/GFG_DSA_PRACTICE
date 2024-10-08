//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    string smallestWindow (string s, string p)
    {
        vector<int>freq(26,0);
        int cnt=0;
        for(int i=0;i<p.length();i++){
            if(freq[p[i]-'a']==0)
            cnt++;
            freq[p[i]-'a']++;
        }
        int j=0,i=0;
        int ans=INT_MAX,start=0;
        
        while(j<s.length()){
            
            freq[s[j]-'a']--;
            if(freq[s[j]-'a']==0)
            cnt--;
            
            if(cnt==0){
                
                while(cnt==0){
                    if(ans>j-i+1){
                        ans=min(ans,j-i+1);
                        start=i;
                    }
                    freq[s[i]-'a']++;
                    if(freq[s[i]-'a']==1)
                    cnt++;
                    i++;
                }
                
            }
            j++;
        }
        if(ans==INT_MAX)
        return "-1";
        return s.substr(start,ans);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends