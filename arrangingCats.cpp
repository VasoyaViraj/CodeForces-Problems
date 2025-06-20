#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        int up = 0, down = 0;

        for(int i = 0; i < n; i++){
            if(s1[i] == 48 && s2[i] == 49){
                up += 1;
            }else if(s1[i] == 49 && s2[i] == 48){
                down += 1;
            } 
        }

        cout << max(up, down) << endl;

    }
    
    return 0;
}
