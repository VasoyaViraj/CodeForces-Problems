#include <bits/stdc++.h>
using namespace std;

array<int, 2> isBeautiful(vector<int> &vec, int n){
    int sum = vec[0];
    for(int i = 1; i < n; i++){
        if(vec[i] == sum) return {0, i};
        else sum += vec[i];
    }
    return {1, -1};
}

int main() {

    // int t;
    // cin >> t;
    
    // while(t--){
        int n;
        cin >> n;

        vector<int> vec(n);
        for(auto& x : vec) cin >> x;

        while(isBeautiful(vec, n)[0] == 0){
            int idx = isBeautiful(vec, n)[1];
            swap(vec[idx - 1], vec[idx]);
        }
    // }
    
    return 0;
}
