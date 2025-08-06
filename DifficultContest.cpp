#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        string s, opt = "";
        cin >> s;

        int freqT = 0;
        for(char x:s){
            if(x == 'T') freqT += 1;
        }

        while(freqT--){
            opt += 'T';
        }

        for(char x:s){
            if(x == 'T') continue;
            opt += x;
        }

        cout << opt << "\n";
    }
    
    return 0;
}
