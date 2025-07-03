#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, count = 0;;
        cin >> n;

        vector<int> vec(n);
        cin >> vec[0];

        for(int i = 1; i < n; i++){
            cin >> vec[i];
            if(abs(vec[0]) < abs(vec[i])) count += 1;
        }

        cout << ((count >= (n-1)/2) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
