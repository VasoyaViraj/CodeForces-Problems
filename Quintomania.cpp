#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int flag = 1;

        int prev, current;
        cin >> prev;
        for(int i = 1; i < n; i++){
            cin >> current;
            if(!(abs(current-prev) == 5 || abs(current-prev) == 7)){
                flag = 0;
            }
            prev = current;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    
    return 0;
}
