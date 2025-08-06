#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, sum = 0;
        cin >> n;

        vector<int> v(n);
        for(auto& x : v) cin >> x;

        for(auto& x : v){
            if(x == 0) sum += 1;
            else sum += x;
        }

        cout << sum << "\n";
    }
    
    return 0;
}
