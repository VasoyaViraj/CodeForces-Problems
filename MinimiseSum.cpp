#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto& x : v) cin >> x;

        cout << v[0] + min(v[0], v[1]) << "\n";
    }
    
    return 0;
}
