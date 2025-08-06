#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;

        if(x >= k && y >= k){
            cout << 0 << " " << 0 << " " << k << " " << 0 << "\n";
            cout << 0 << " " << 0 << " " << 0 << " " << k << "\n";
        }else{
            cout << 0 << " " << 0 << " " << min(x,y) << " " << min(x,y) << "\n";
            cout << 0 << " " << min(x,y) << " " << min(x,y) << " " << 0 << "\n";
        }

    }
    
    return 0;
}
