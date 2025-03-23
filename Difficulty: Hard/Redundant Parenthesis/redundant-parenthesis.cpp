//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

//User function Template for C++

class Solution {
   public: string removeBrackets(string a) {
      stack < int > s, op;
      int n = a.size();
      vector < int > del(n, 0);
      for (int i = 0; i < n; i++) {
         char c = a[i];
         if (isalpha(c)) continue;
         if (c == ')') {
            bool addSub = false, mulDiv = false;
            if (a[s.top()] == '(') {
               del[i] = 1;
               del[s.top()] = 1;
               s.pop();
            } 
            else {
               while (a[s.top()] != '(') {
                  char d = a[s.top()];
                  s.pop();
                  op.pop();
                  (d == '*' || d == '/') ? mulDiv = true: addSub = true;
               }

               int ind = s.top();
               s.pop();
               if (op.empty()) {
                  del[i] = 1;
                  del[ind] = 1;
                  continue;
               }
               char d = a[op.top()];
               if (d == '+' || ((d == '*' || d == '-') && !addSub)) {
                  del[i] = 1;
                  del[ind] = 1;
               }
            }
         } 
         else if (c == '(') s.push(i);
         else {
            s.push(i);
            op.push(i);
         }
      }
      string ans = "";
      for (int k = 0; k < n; k++) if (!del[k]) ans.push_back(a[k]);
      return ans;
   }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string Exp;
        cin >> Exp;
        
        Solution ob;
        cout << ob.removeBrackets(Exp) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends