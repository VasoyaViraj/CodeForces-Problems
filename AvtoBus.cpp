#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

void solve(long long n){
    if(n < 4 || n%2 == 1){
        cout << -1 << "\n";
    }else{
        cout << ((n/6) + (n%6 != 0)) << " " << (n/4) << "\n";
    }
}

int main() {
    Jay Shree Ram

    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;

        solve(n);
    }

    return 0;
}
