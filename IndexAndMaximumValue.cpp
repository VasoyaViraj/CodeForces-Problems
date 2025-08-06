#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for(auto& x:v) cin >> x;

        int max = *max_element(v.begin(), v.end());

        while(m--){
            char ch;
            long long l ,r;
            cin >> ch >> l >> r;
            if(max >= l && max <= r){
                if(ch == '+'){
                    max += 1;
                }else{
                    max -= 1;
                }
            }
            cout << max << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
