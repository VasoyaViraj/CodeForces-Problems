#include <bits/stdc++.h>
using namespace std;

long long check(int upper, int lower, int n){
    if(n < 3) return 0;
    if(upper < 2 || lower < 1) return 0;
    long long up = upper/2;
    return lower*(up)*(upper-up);
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n, upper=0, lower=0;
        string s;
        cin >> n >> s;

        for(char& x:s){
            if(x == '-') upper++;
            else lower++;
        }

        cout << check(upper,lower,n) << "\n";
    }
    
    return 0;
}
