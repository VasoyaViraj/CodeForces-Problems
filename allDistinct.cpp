#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> vec(n);
        for(auto& x:vec) cin >> x;

        set<int> uniq(vec.begin(), vec.end());
        int len = uniq.size();

        cout << ((n-len)%2 == 0 ? len : len-1)  << endl;
    }
    
    return 0;
}