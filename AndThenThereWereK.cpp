#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, z = 1;
        cin >> n;

        while(z*2<=n) z*=2;
        cout << z-1 << '\n';
    }
    
    return 0;
}