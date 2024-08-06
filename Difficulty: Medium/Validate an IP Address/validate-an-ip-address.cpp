//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     int isValid(string queryIP) 
        {
            if(count(queryIP.begin(),queryIP.end(),'.')==3)
            {
                string part;
                vector<string>vec;
                stringstream ss(queryIP);
                while(getline(ss,part,'.'))
                {
                    vec.push_back(part);
                }
                if(vec.size()!=4)
                    return 0;
                for(int i=0;i<vec.size();i++)
                {
                    if(vec[i].size()==0 || vec[i].size()>3 || (vec[i].size()>1 && vec[i][0]=='0'))
                        return 0;
                    for(int j=0;j<vec[i].size();j++)
                    {
                        if(!isdigit(vec[i][j]))
                            return 0;
                    }
                    int num=stoi(vec[i]);
                    if(num<0 || num>255)
                        return 0;
                }
                return 1;
            }
            return 0;
        }

};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends