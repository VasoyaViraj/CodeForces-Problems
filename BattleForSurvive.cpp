#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n, sum = 0;
        cin >> n;

        vector<long long> v(n);
        for(auto& x : v){
            cin >> x;
            sum += x;
        }

        cout << sum - 2*v[n-2] << "\n";
    }
    
    return 0;
}
