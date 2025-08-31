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

        vector<long long> v(n);
        for(auto& x : v) cin >> x;

        for(int i =0; i < n; i++) if(v[i] == 1) v[i]++;

        cout << v[0] << " ";
        for(int i = 1; i < n; i++){
            if(v[i] % v[i-1] == 0){
                v[i]++;
            }
            cout << v[i] << " ";
        }
        cout << "\n"; 
    }
    
    return 0;
}