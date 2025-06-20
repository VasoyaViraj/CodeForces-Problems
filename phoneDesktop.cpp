#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int one, four;
        cin >> one >> four;

        int screens = 0, left;
        
        if(four%2 == 0){
            screens = four/2;
            left = screens*7;
        }else{
            screens = four/2 + 1;
            left = screens*7 + 4;
        }

        if(screens == 0 && one > 0){
            screens = 1;
            left = 15;
        }

        if(left >= one){
            cout << screens << endl;
        }else{
            one = one - left;
            cout << ((one%15 == 0) ? screens+(one/15) : screens+(one/15)+1) << endl;
        }

    }
    
    return 0;
}
