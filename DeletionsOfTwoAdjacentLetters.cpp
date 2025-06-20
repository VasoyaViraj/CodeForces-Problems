#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        string str;
        char chr;
        cin >> str >> chr;

        int flag = 0, size = str.size();
        for(int i = 0; i < size; i++){
            if(str[i] == chr && i%2 == 0){
                flag = 1;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    
    return 0;
}
