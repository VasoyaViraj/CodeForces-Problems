#include <bits/stdc++.h>
using namespace std;

string solve(int n){
    string ans= "";
    if(n == 1)  return "-1";
    if(n == 2)  return "66";
    if(n == 3)  return "-1";
    if(n == 4)  return "3366";
    if(n == 5)  return "36366";
    if(n%2 == 0){
        for(int i = 0; i < n-2; i++){
            ans.push_back('3');
        }
        ans += "66";
    }else{
        for(int i = 0; i < n-5; i++){
            ans.push_back('3');
        }
        ans += "36366";
    }
    return ans;
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        cout << solve(n) << "\n";
    }
    
    return 0;
}
