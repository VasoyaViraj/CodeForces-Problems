#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n, opt = 0;
        cin >> n;

        while(n>0){
            opt += n;
            n = n/2;
        }

        cout << opt << endl;
    }
    
    return 0;
}
