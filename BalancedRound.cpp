#include <bits/stdc++.h>
using namespace std;

long long count(vector<long long>& v) {
    long long maxCount = 0, count = 0;
    for(int num : v){
        if(num == 1){
            count++;
            maxCount = max(maxCount, count);
        }else{
            count = 0;
        }
    }
    return maxCount+1;
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n);
        vector<long long> v1;
        for(auto& x : v) cin >> x;

        sort(v.begin(), v.end());
        for(int i = 0; i < n-1; i++){
            if(v[i+1] - v[i] <= k){
                v1.push_back(1);
            }else{
                v1.push_back(0);
            }
        }

        cout << n - count(v1) << "\n";
    }
    
    return 0;
}
