#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, cnt_zero = 0, cnt_one = 0;
        cin >> n;
        bool flg = true;
        for(int i=0; i<n; i++){
            char x;
            cin >> x;
            cnt_zero += (x == '0') ? 1 : 0;
            cnt_one  += (x == '0') ? 0 : 1;
            flg = (cnt_zero < cnt_one) ? false : flg;
        }
        cout << ((flg && cnt_zero==cnt_one) ? "yes" : "no") << "\n";
    }
    return 0;
}
