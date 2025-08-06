#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int arr[n], turns = (n+1)/2, sum = 0, ans = 0;
        for(int& x:arr) cin >> x;

        map<int,int> mp;
        for(int i=0;i<n;i++){
			mp[arr[i]]++;
		}

        vector<pair<int,int>> v;
        for(auto it : mp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());

        for(int i = 0; sum < turns; i++){
            sum += v[i].first;
            if(sum <= turns) ans += 2;
            else{
                ans += 1;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
