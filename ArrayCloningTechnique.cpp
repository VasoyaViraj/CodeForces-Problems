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
        long long n;
        cin >> n;

        map<long long, long long> mp;
        long long maxFreq = 0, temp, opt = 0;

        for(long long i = 0; i < n; i++){
            cin >> temp;
            mp[temp]++;
            maxFreq = max(maxFreq, mp[temp]);
        }

        while(maxFreq < n){
            opt++;
            if(maxFreq*2 <= n){
                opt += maxFreq;
                maxFreq *= 2;
            }else{
                opt += (n - maxFreq);
                maxFreq = n;
            }
        }

        cout << opt << "\n";
    }
    
    return 0;
}
