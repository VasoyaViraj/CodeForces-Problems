#include<bits/stdc++.h>
using namespace std;
 
int icpcBallons(int n,string s){
    set<char> uni;
    for(int i = 0; i < n; i++){
        uni.insert(s[i]);
    }

    return s.length()+uni.size();
}
 
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;
        cout << icpcBallons(n, s) << "\n";
    }

    return 0;
}