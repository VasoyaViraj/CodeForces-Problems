#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n, flag = 1;
        cin >> n;

        vector<long long> v(n);
        for(long long& x:v) cin >> x;

        for(int i = 0; i < n; i++){
            long long left = (i*2)+1, right = ((n-i-1)*2)+1;
            if(v[i] < left || v[i] < right){
                flag = 0;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
