#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

bool checkAP(long long a, long long b, long long c){
    if(2*b == a+c) return true;
    return false;
}

string solve(long long a, long long b, long long c){
    int n = (2*b - c)/a;
    if(checkAP(a*n, b, c) && n > 0) return "YES";

    n = (2*b - a)/c;
    if(checkAP(a, b, c*n) && n > 0) return "YES";

    n = (a + c)/(2*b);
    if(checkAP(a, b*n, c) && n > 0) return "YES";

    return "NO";
}

int main() {
    Jay Shree Ram

    int t;
    cin >> t;
    
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        cout << solve(a,b,c) << "\n";
    }
    
    return 0;
}
