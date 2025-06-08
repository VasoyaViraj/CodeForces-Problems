#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> initial;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            initial.push_back(temp);
        }

        vector<string> init;
        for(int i = 0; i < n; i++){
            int temp;
            string str;
            cin >> temp >> str;
            init.push_back(str);
        }

        for(int i = 0; i < n; i++){
            for(auto& chr : init[i]){
                if(chr == 'U') initial[i] -= 1;
                else initial[i] += 1;
            }
        }

        for(auto ans : initial){
            if(ans < 0) ans = ans + 10;
            else if(ans > 9) ans = ans - 10;
            cout << ans << ' ';
        }
        cout << "\n";
    }
    
    return 0;
}
