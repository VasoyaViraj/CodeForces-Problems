#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int m = 2*n;

        vector<int> a(n), b(n);
        for(auto& x:a) cin >> x;

        b[0] = min(m-a[0], a[0]);
        for(int  i = 1; i < n; i++){
            if(a[i] > b[i-1]){
                b[i] = a[i];
            }else{
                b[i] = max(a[i], m-a[i]);
            }
        }

        cout << "_______\n";
        for(int x : b) cout << x << " ";
        cout << "\n_______\n";

    }
    
    return 0;
}
