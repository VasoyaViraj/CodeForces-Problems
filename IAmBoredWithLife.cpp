#include <bits/stdc++.h>
using namespace std;

long long calcFact(long long a){
    long long fac = 1;
    for(long long i = 2; i <= a; i++){
        fac = fac * i;
    }
    return fac;
}

int main() {

    long long a, b;
    cin >> a >> b;

    cout << calcFact(min(a, b)) << endl;
    
    return 0;
}
