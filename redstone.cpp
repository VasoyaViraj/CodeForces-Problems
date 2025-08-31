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
        for(auto& x : v) cin >> x;

        if(n == 2){
            if(v[0] == v[1]){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
            continue;
        }

        unordered_set<int> seen;
        int flag = 0;

        for(int x : v) {
            if(seen.count(x)) {
                flag = 1;
                break;
            }
            seen.insert(x);
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}
