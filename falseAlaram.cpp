#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int>f(n);
        for(auto&x:f){
            cin>>x;
        }

        int i=0,count=0;
        while(i<n){
            if(f[i]==1){
                i+=x;
                count++;
            }else{
                i++;
            }
        }
        if(count>1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}