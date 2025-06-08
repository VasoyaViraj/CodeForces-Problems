#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n, m;
        cin >> n >> m;

        long long opt;
        if(n==0 && m==0) opt = 1;
        else if(m==0) opt = n+1;
        else if(n==0) opt = 1;
        else opt = 2*m + n + 1;

        cout << opt << endl;
    }
    
    return 0;
}
