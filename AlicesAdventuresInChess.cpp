#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, a, b, x = 0, y = 0, flag = 0;
        string s;
        cin >> n >> a >> b >> s;

        for(int i = 0; i < 100; i++){
            if(x == a && y == b){
                flag = 1;
                break;
            }else if(s[i%n] == 'N'){
                y += 1;
            }else if(s[i%n] == 'S'){
                y -= 1;
            }else if(s[i%n] == 'E'){
                x += 1;
            }else{
                x -= 1;
            }
        }

        cout << (flag ? "YES" : "NO") << "\n";
    }
    
    return 0;
}