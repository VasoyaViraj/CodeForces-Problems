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
        int n, ans;
        cin >> n;

        vector<int> v(n);
        for(auto& x : v) cin >> x;

        int mx = v[n-1]-v[0];
        for(int i = 0; i < n-1; i++) mx = max(mx, v[n-1]-v[i]);
        for(int i = 1; i < n; i++) mx = max(mx, v[i]-v[0]);
        for(int i = 0; i < n-1; i++) mx = max(mx, v[i]-v[i+1]);
    
        cout << mx << '\n';
    }
    
    return 0;
}