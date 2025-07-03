#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;

        int len = s.length(), endR = 0, frontR = 0;
        for(int i = len-1; s[i] == '0'; i--) endR++;
        for(int i = 0; i < len-1-endR; i++){
            if(s[i] != '0') frontR++;
        }

        cout << frontR + endR << "\n";
    }
    
    return 0;
}
