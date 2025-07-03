#include <bits/stdc++.h>
using namespace std;

string check(int zeros, int ones, int k){
    int maxx = max(zeros, ones);
    int minn = min(zeros, ones);
    int pairAble = maxx - minn;

    if(pairAble == k*2) return "YES";
    if(k*2 > pairAble){
        maxx -= pairAble;
        k -= pairAble/2;
        if(k%2 == 1) return "NO";
        if(maxx >= k && minn >= k) return "YES";
    }
    return "NO";
}

int main(){

    int t;
    cin >> t;
    
    while(t--){
        int n, k, zeros = 0, ones = 0;
        cin >> n >> k;

        string str;
        cin >> str;

        for(int i = 0; i < n; i++){
            if(str[i] == '0') zeros++;
            else ones++;
        }

        cout << check(zeros, ones, k) << "\n";
    }
    
    return 0;
}
