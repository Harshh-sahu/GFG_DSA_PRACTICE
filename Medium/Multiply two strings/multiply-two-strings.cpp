//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
     
      
       string str="";
       int n=s1.length();
       int m=s2.length();
       int val=0;
       int n1=0, m1=0;
       if(s1[0]=='-' && s2[0]=='-'){
           val=0;
       }
       if(s1[0]!='-' && s2[0]!='-'){
           val=0;
       }
        if(s1[0]!='-' && s2[0]=='-'){
           val=1;
       }
        if(s1[0]=='-' && s2[0]!='-'){
           val=1;
       }
       for(int i=0; i<n; i++){
           if(s1[i]-'0'>0 && s1[i]-'0'<=9){
               break;
           }else{
               n1++;
           }
           
       }
         for(int i=0; i<m; i++){
           if(s2[i]-'0'>0 && s2[i]-'0'<=9){
               break;
           }else{
               m1++;
           }
       }
       int sum=0;
       for(int i=m1; i<m; i++){
           sum+=(s2[i]-'0');
       }
       if(sum==0) return "0";
        for(int i=n1; i<n; i++){
           sum+=(s1[i]-'0');
       }
       if(sum==0) return "0";
       vector<vector<int>>v(m-m1, vector<int>(n+m-m1-n1, 0));
       for(int i=m-1; i>=m1; i--){
           int carry=0;
           int j;
           for(j=n-1; j>=n1; j--){
               int num=(carry+(s1[j]-'0')*(s2[i]-'0'))%10;
               v[m-i-1][m-i-1+n-j-1]=num;
               carry=(carry+(s1[j]-'0')*(s2[i]-'0'))/10;
           }
           if(carry>0) v[m-i-1][m-i-1+n-n1]=carry;
       }
       int carry1=0;
       for(int i=0; i<m+n-m1-n1; i++){
           int num=0; 
           for(int j=0; j<m-m1; j++){
               num+=v[j][i];
           }
           str+=to_string((carry1+num)%10);
           carry1=(carry1+num)/10;
       }
       if(carry1>0){
          while(carry1){
              str+=to_string(carry1%10);
              carry1/=10;
          }
       }
       reverse(str.begin(), str.end());
       string ans="";
       if(val) ans+='-';
       for(int i=0; i<str.length(); i++){
           int flag=0;
           if(str[i]!='0'){
               flag=1;
               while(i<str.length()){
                   ans+=str[i];
                   i++;
               }
           }
           if(flag) break;
       }
       return ans;
    }

 
};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends