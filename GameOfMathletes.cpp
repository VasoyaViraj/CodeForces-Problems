#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, k, score=0, sum;
        cin >> n >> k;

        vector<int> v(n);
        for(auto& x:v) cin >> x;
        sort(v.begin(), v.end());

        int ptr1 = 0, ptr2 = n-1;
        while(ptr1 < ptr2){
            sum = v[ptr1] + v[ptr2];
            if(sum == k){
                score += 1;
                ptr1 += 1;
                ptr2 -= 1;
            }else if(sum > k){
                ptr2 -= 1;
            }else{
                ptr1 += 1;
            }
        }

        cout << score << "\n";
    }
    
    return 0;
}
