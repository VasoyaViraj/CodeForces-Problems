#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        if(n%3 == 2){
            cout << (n/3) + 1 << " " << (n/3) + 2 << " " << (n/3) - 1 << endl;
        }else if(n%3 == 1){
            cout << (n/3) << " " << (n/3) + 2 << " " << (n/3) - 1 << endl;
            // if((n%3) - 2 == 0) cout << (n/3) << " " << (n/3) + 2 << " " << (n/3) - 1 << endl;
            // else cout << (n/3) + 1 << " " << (n/3) + 2 << " " << (n/3) - 2 << endl;
        }else{
            cout << (n/3) << " " << (n/3) + 1 << " " << (n/3) - 1 << endl;
        }

    }
    
    return 0;
}
