#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, count = 0;
        string s;
        cin >> n >> s;

        map<int, int> mp;

        for(auto ch : s){
            mp[ch-64]++;
        }

        for(auto e : mp){
            if(e.second >= e.first) count++;
        }

        cout << count << "\n";
    }
    
    return 0;
}
