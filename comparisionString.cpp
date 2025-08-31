#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, lt = 0, gt = 0, mlt = 0, mgt = 0;
        string s;
        cin >> n >> s;

        for(auto x : s){
            if(x == '>'){
                lt = 0;
                gt += 1;
                mgt = max(mgt, gt);
            }else{  
                gt = 0;
                lt += 1;
                mlt = max(mlt, lt);
            }
        }

        cout << max(mgt, mlt) + 1 << "\n";
    }
    
    return 0;
}