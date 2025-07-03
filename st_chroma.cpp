#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, x;
        cin >> n >> x;

        int var = 0, isSkipped = 0;
        for(int i = 1; i < n; i++){
            if(var == x){
                var += 1;
                isSkipped = 1;
            }
            cout << var << " ";
            var += 1;
        }

        cout << ((isSkipped == 1) ? x : n-1) << "\n";

    }
    
    return 0;
}
