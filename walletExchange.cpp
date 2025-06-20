#include <bits/stdc++.h>
using namespace std;

string check(int a, int b){
    long long small = min(a,b), big = max(a,b);

    if(small%2 == 0){
        small = 0;
        big = big - small;
    }else{
        small = 1;
        big = big - small + 1;
    }

    big = big%2;

    return ((small+big == 1) ? "Alice" : "Bob");
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long a, b;
        cin >> a >> b;
        
        cout << check(a,b) << endl;
    }
    
    return 0;
}