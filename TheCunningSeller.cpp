#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

long long nearPow3(long long x){
    long long ans = 1;
    while(ans*3 <= x){
        ans *= 3;
    }
    return ans;
}

long long countThreeFactors(long long n) {
    long long count = 0;
    while (n % 3 == 0 && n > 0) {
        count++;
        n /= 3;
    }
    return count;
}

long long func(long long x){
    long long x2 = countThreeFactors(x);
    if(x == 1) return 3;
    return (((long long)pow(3,x2))*(9+x2)/3);
}

int main() {
    Jay Shree Ram

    int t;
    cin >> t;
    
    while(t--){
        long long n, ans  = 0;
        cin >> n;

        while(n>0){
            long long near = nearPow3(n);
            ans += func(near);
            n = n-near;
        }

        cout << ans << "\n";
    }
    
    return 0;
}
