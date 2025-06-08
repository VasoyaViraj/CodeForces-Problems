#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> num(n);
        for(auto& x:num){
            cin >> x;
        }
        
        int count1 = 0, count2 = 0;
        int even = n/2, odd = n-even;

        for(int i = 0; i < n; i+=2){
            if(num[i]%2 == 0) count1 += 1;
        }
        for(int i = 1; i < n; i+=2){
            if(num[i]%2 == 0) count2 += 1;
        }

        if((count1 == 0 || count1 == odd) && (count2 == 0 || count2 == even)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    
    return 0;
}
