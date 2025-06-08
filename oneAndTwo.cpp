#include <bits/stdc++.h>
using namespace std;

int findPosition(vector<int> vec, int freq){
    int frq = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == 2){
            frq += 1;
            if(frq == freq/2){
                return i+1;
            }
        }
    }
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int freq2 = 0;

        vector<int> vec(n);
        for(auto& x:vec){
            cin >> x;
            if(x == 2) freq2++;
        }

        if(freq2 == 0){
            cout << 1;
        }else if(freq2%2 == 0){
            cout << findPosition(vec, freq2);
        }else{
            cout << -1;
        }
        
        cout << endl;

    }
    
    return 0;
}
