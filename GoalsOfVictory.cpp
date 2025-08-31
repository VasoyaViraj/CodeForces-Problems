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
        int n, sum=0;
        cin >> n;
        for(int i = 1; i < n; i++){
            int x;
            cin >> x;
            sum += x;
        }

        cout << -sum << "\n";
    }
    
    return 0;
}