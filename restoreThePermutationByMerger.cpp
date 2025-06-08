#include <bits/stdc++.h>
using namespace std;

int isPresent(vector<int>& vec, int temp){
    for(auto& x: vec){
        if(x == temp){
            return 0;
            break;
        }
    }
    return 1;
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> permutation;
        for(int i = 0; i < 2*n; i++){
            int temp;
            cin >> temp;
            if(isPresent(permutation, temp)){
                permutation.push_back(temp);
            }
        }

        for(auto& x:permutation){
            cout << x << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
