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
        string a, b;
        cin >> a >> b;

        map<char, int> mp;
        int sum = 0, cnt = b.size()-1;

        for(int i = a.size()-1; i >= 0; i--){
            if(a[i] == b[cnt] && mp[a[i]] == 0) cnt--;
            else mp[a[i]]++;
        }

        cout << ((cnt == -1) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}