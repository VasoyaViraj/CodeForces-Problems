#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (count(s.begin(), s.end(), s[0]) == n || (k == 0 && s >= rev)) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}