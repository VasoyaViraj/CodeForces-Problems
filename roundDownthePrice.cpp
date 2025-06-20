#include <bits/stdc++.h>
using namespace std;

int power(long long n){
    int ans = -1, opt = 1;
    
    while(n > 0){
        ans += 1;
        n = n/10;
    }
    for(int i = 1; i <= ans; i++) opt *= 10;

    return opt;
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;

        cout << n - power(n) << endl;
    }
    
    return 0;
}
