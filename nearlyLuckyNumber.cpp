#include <bits/stdc++.h>
using namespace std;

int main(){
 
    int i=0;
    string str;
    cin >> str;
    
    for(auto c:str){
        i+=(c=='4'||c=='7');
    }

    cout << ((i==4||i==7) ? "YES" : "NO");

    return 0;
}