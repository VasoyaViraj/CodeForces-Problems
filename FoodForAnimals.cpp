#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x = x - a;
        y = y - b;
        if(x > 0 && x <= c){
            c = c - x;
            x = 0;
        }
        if(y > 0 && y <= c){
            y = 0;
        }
        cout << ((x>0 || y>0) ? "NO" : "YES") << endl;
    }
    
    return 0;
}
