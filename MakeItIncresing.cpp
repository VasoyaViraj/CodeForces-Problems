#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

int main() {
    Jay Shree Ram

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for(auto &x : a) cin >> x;

        long long count = 0;
        bool flag = true;

        for(int i = n-2; i >= 0; i--){
            while(a[i] >= a[i+1] && a[i] > 0){
                a[i] /= 2;
                count++;
            }
            if(a[i] >= a[i+1]){
                flag = false;
                break;
            }
        }

        if(flag) cout << count << "\n";
        else cout << "-1\n";
    }
    
    return 0;
}