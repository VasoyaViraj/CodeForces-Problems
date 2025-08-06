#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, k, idx1, idx2;
        cin >> n >> k;

        idx1 = 1;
        idx2 = (n/k) + 1;

        for(int i = 0; i < n; i++){
            if((i+1)%k == 0){
                cout << idx1 << " ";
                idx1 += 1;
            }else{
                cout << idx2 << " ";
                idx2 += 1;
            }
        }
        cout << "\n";
    }
    
    return 0;
}