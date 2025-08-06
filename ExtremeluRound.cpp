#include<bits/stdc++.h>
using namespace std;
 
int solve(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++){
        int num = i;
        while(num <= n) {
            count++;
            num *= 10;
        }
    }
    return count;
}
 
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << solve(n) << "\n";
    }

    return 0;
}