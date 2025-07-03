#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, sum = 0, isPresent = 0;
        cin >> n; 

        vector<int> vec(n);
        for(auto& x:vec){
            cin >> x;
            sum += x;
            if(x%3 == 1) isPresent = 1;  
        }

        if(sum%3 == 0){
            cout << 0 << "\n";
        }else if(sum%3 == 2){
            cout << 1 << "\n";
        }else if(sum%3 == 1 && isPresent){
            cout << 1 << "\n";
        }else{
            cout << 2 << "\n";
        }
        
    }
    
    return 0;
}
