#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long a, b, n, temp;
        cin >> a >> b >> n;

        while(n--){
            cin >> temp;
            b += min(a-1, temp);
        }

        cout << b << "\n";
    }
    
    return 0;
}
