#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, m, x = 0, lenn = 0;
        cin >> n >> m;

        while(n--){
            string s;
            cin >> s;
            lenn += s.length();
            if(lenn <= m) x++;
        }

        cout << x << "\n";
    }
    
    return 0;
}
