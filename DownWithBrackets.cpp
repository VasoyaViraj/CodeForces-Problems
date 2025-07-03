#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        string str;
        cin >> str;

        int open = 0, close = 0, count = 0;
        for(char& x : str){
            if(x == '(') open++;
            else close++;
            if(open == close){
                count += 1;
                open = 0;
                close = 0;
            }
        }

        cout << ((count > 1) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
