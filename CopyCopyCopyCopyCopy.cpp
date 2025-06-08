#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<long long> vec(n);
        for(auto& x:vec){
            cin >> x;
        }

        set<long long> uniq(vec.begin(), vec.end());
        cout << uniq.size() << endl;

    }   
    
    return 0;
}
