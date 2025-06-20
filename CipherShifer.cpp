#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    while(t--){
        string str, opt = "";
        cin >> n >> str;

        while(str.size() > 0){
            opt.push_back(str[0]);
            str.erase(str.begin(), str.begin() + str.find(opt.back(), 1) +1);
        }

        cout << opt << endl;
    }
    
    return 0;
}