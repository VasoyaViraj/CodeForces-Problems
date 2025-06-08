#include <bits/stdc++.h>
using namespace std;

int main() {

    // int t;
    // cin >> t;
    
    // while(t--){
        int x, y;
        cin >> x;

        int max = __gcd(x,1) + 1;
        for(int i = 2; i < x; i++){
            int opt = __gcd(x,i) + i;
            if(opt > max){
                max = opt;
                y = i;
            }
        }

        cout << max << endl;
    // }
    
    return 0;
}
