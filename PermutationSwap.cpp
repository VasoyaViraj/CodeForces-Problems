#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

int main() {
    Jay Shree Ram

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);
        for(auto& it : v) cin >> it;

        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] != i + 1){
                int diff = abs(v[i] - (i + 1));
                ans = (ans == 0 ? diff : __gcd(ans, diff));
            }
        }
        cout << ans << "\n";

    }
    
    return 0;
}
