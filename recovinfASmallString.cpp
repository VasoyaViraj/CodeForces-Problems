#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int a = 1, b = 1, c = n-2;

        if(c > 26){ 
            b += c-26;
            c = 26;
            if(b > 26){
                a += b-26;
                b = 26;
            } 
        }

        cout << char(a+96) << char(b+96) << char(c+96) << endl;
    }
    
    return 0;
}
