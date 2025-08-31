#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

bool check(vector<int> v, long long l, long long r, long long k){
    long long sum = 0;
    for(int i = l-1; i < r; i++){
        sum += v[i];
    }
    sum = sum%2;

    long long subSum = (k*(r-l+1))%2;

    if(sum == 0 && subSum == 0) return true;
    if(sum == 0 && subSum == 1) return false;
    if(sum == 1 && subSum == 0) return false;
    if(sum == 1 && subSum == 1) return true;
}

int main(){
    Jay Shree Ram

    int t;
    cin >> t;
    
    while(t--){
        long long n, m, sum = 0;
        cin >> n >> m;

        vector<int> v(n);
        for(auto& it:v){
            cin >> it;
            sum += it;
        }
        sum = sum%2;

        while(m--){
            long long l, r, k;
            cin >> l >> r >> k;

            if(sum == 1){
                if(check(v, l, r, k)) cout << "YES\n";
                else cout << "NO\n";
            }else{
                if(check(v, l, r, k)) cout << "NO\n";
                else cout << "YES\n";
            }
        }
        
    }
    
    return 0;
}
