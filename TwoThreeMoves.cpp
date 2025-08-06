#include <bits/stdc++.h>
using namespace std;

long long solve(long long n){
    if(n == 1) return 2;
    if(n <= 3) return 1;
    return (n+2)/3;
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;

        cout << solve(n) << "\n";
    }
    
    return 0;
}