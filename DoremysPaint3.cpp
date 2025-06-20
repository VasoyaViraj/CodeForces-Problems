#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;
        map<int,int> mp;
        vector<int> vec;

        for(int i=0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }

        if(mp.size() == 1){
            cout << "YES" << endl;
        }else if(mp.size() >= 3){
            cout << "NO" << endl;
        }else{
            for(auto i:mp) vec.push_back(i.second);
            cout << ((abs(vec[0]-vec[1]) >= 2) ? "NO" : "YES") << endl;
        }
    }

    return 0;
}