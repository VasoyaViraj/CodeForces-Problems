#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        if(max(a,b) == a){
            swap(a,b);
        }
        
        int diff = b-a-1;
        int end;

        if(diff >= a-1){
            end = b+diff-a+1;
            if(c > end){
                cout << -1 << endl;
            }else{
                cout << ((c+diff+1 > end) ? c+diff+1-end : c+diff+1) << endl;
            }
        }else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}
