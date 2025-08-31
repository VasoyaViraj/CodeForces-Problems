#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

int main() {
    Jay Shree Ram

    long long t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        long long opt = (n%2 == 0 ? 1 : 0);

        vector<long long> v(n);
        for(auto &x : v) cin >> x;

        sort(v.begin(), v.end());

        for(long long i = opt; i < n; i += 2) ans += v[i];
        cout << ans << "\n";
    }
    
    return 0;
}
