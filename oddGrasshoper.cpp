#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

long long position(long long x, long long n){
    long long rem = n%4;

    if(rem == 0) return x;
    else if(rem == 1) return x + ((x%2 == 0) ? -n : n);
    else if(rem == 2) return x + ((x%2 == 0) ? 1 : -1);
    else if(rem == 3) return x + ((x%2 == 0) ? n + 1 : -n - 1);
}

int main() {
    Jay Shree Ram

    int t;
    cin >> t;
    
    while(t--){
        long long x, n;
        cin >> x >> n;

        cout << position(x, n) << "\n";
    }
    
    return 0;
}