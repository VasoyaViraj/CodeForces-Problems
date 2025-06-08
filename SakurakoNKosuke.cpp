#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int flag = 1, counter = 1;
        int position = 0;
        
        while(abs(position) <= n){
            if(flag) position += -1*counter;
            else position += counter;
            counter += 2;
            flag = !flag;
        }

        if(flag) cout << "Kosuke" << endl;
        else cout << "Sakurako" << endl;
    }
    
    return 0;
}
