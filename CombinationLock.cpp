#include <bits/stdc++.h>
using namespace std;

int step(int a, int b){
    return min(abs(a-b), 10-abs(a-b));
}

int main() {

    int n, opt = 0;
    string s1, s2;

    cin >> n >> s1 >> s2;

    for(int i = 0; i < n; i++){
        opt += step(s1[i], s2[i]);
    }

    cout << opt << "\n";
    
    return 0;
}
