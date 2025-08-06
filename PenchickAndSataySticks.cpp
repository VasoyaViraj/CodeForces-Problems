#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, flag = 1;
        cin >> n;

        vector<int> v(n);
        for(int& x:v) cin >> x;

        for(auto it = v.begin(); it != v.end() - 1; it++){
            if(abs(*it - *(it+1)) == 1 && (*(it) > *(it + 1))) swap(*it, *(it+1));
        }

        for(auto it = v.begin(); it != v.end() -1; it++){
            if(*it > *(it+1)) flag = 0;
        }

        cout << (flag ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
