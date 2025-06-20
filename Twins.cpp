#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    vector<int>twin(n);
    for(auto& x:twin) cin >> x;

    sort(twin.rbegin(),twin.rend());
    int ts=0,ms=0,tws;
    for(int i=0;i<twin.size();i++){
        ts+=twin[i];
    }
    tws=ts;
    for(int i=0;i<twin.size();i++){
        if(ms<=tws){
            ms+=twin[i];
            tws-=twin[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}