#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, flag = 0;
        cin >> n;

        vector<int> v(n);
        for(auto& x:v) cin >> x;

        for(int i = 0; i < n-3; i++){
            if(min({v[i], v[i+1], v[i+2]}) == 0){
                flag = 0;
            }else{
                int count = (v[i] == -1) + (v[i+1] == -1) + (v[i+2] == -1);
                if(count == 2) {
                    flag = 1;
                }else if(count == 1) {
                    if((v[i] != -1 && v[i+1] != -1 && v[i] == v[i+1])){
                        v[i+2] = v[i];
                        flag = 1;
                    }else if((v[i] != -1 && v[i+2] != -1 && v[i] == v[i+2])){
                        v[i+1] = v[i];
                        flag = 1;
                    }else if(v[i+1] != -1 && v[i+2] != -1 && v[i+1] == v[i+2]){
                        v[i] = v[i+1];
                        flag = 1;
                    }
                }else if()
            }
        }

        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
    
    return 0;
}
