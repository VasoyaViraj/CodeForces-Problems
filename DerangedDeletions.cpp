#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, flag = 0;
        cin >> n;

        vector<int> v(n);
        for(auto& x:v) cin >> x;

        for(int i = 0; i < n-1; i++){
            if(v[i] > v[i+1]){
                flag = 1;
                cout << "YES\n" << 2 << "\n" << v[i] << " " << v[i+1] << "\n";
                break;
            }
        }

        if(flag == 0) cout << "NO\n";
    }
    
    return 0;
}
