#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;

        if(n == m){
            cout << "YES" << endl;
        }else if(n > m){
            if((n-m)%2 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }

    }
    
    return 0;
}
