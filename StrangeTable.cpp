#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        
        long long n, m, x;
        cin >> n >> m >> x;

        x--;
		cout << m*(x%n)+x/n+1 << '\n';
    }
    
    return 0;
}