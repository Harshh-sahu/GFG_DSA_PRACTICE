//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends


            class Solution {
  public:
    string compareFrac(string str) {

    int num1 = stoi(str);
        string str1 = to_string(num1);
        int l1 = str1.size();
        string new1 = str.substr(l1 + 1);

        int num2 = stoi(new1);
        string str2 = to_string(num2);
        int l2 = str2.size();
        string new2 = new1.substr(l2 + 2);

        int num3 = stoi(new2);
        string str3 = to_string(num3);
        int l3 = str3.size();
        string new3 = new2.substr(l3 + 1);

        int num4 = stoi(new3);

        if ((num1 * num4) > (num3 * num2)) {
            return to_string(num1) + "/" + to_string(num2);
        } else if ((num1 * num4) < (num3 * num2)) {
            return to_string(num3) + "/" + to_string(num4);
        } else {
            return "equal";
        }
    }
};




//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends