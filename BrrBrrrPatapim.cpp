#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, temp;
        cin >> n;

        vector<int> vec;
        for(int i = 0; i < n; i++){
            cin >> temp;
            vec.push_back(temp);
        }
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-1; j++) cin >> temp;
            cin >> temp;
            vec.push_back(temp);
        }

        int sum = 0;
        for(int& x:vec) sum += x;
        vec.insert(vec.begin(), (n*(2*n+1))-sum);

        for(int& x:vec) cout << x << " ";
        cout << "\n";
    }
    
    return 0;
}
