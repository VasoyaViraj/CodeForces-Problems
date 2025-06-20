#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--){
        long long k, n;
        cin >> k >> n;

        long long sum = 0, opt = 0;

        vector<int> vec(n);
        for(auto& x:vec){
            cin >> x;
            opt += 2*x-1;
        }
        sort(vec.begin(), vec.end());

        cout << opt - 2*vec.back() + 1 << endl;
    }
    
    return 0;
}
