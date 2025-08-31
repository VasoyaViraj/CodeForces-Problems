#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

int main() {
    Jay Shree Ram

    long long t;
    cin >> t;
    
    while(t--){
        long long n, a, b;
        cin >> n >> a >> b;

        if(n%2 == 0){
            if(a == b || a < b){
                if(b%2 == 0) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }else{
                if(a%2 == 0 && b%2 == 0) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }
        }else{
            if(a == b || a < b){
                if(b%2 == 1) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }else{
                if(a%2 == 1 && b%2 == 1) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }
        }

    }
    
    return 0;
}