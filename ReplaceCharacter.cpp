#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--){
		int n;
		string s;
		cin >> n >> s;

		map<char,int> mp;
		for(int i=0;i<n;i++){
			mp[s[i]]++;
		}

        vector<pair<int,char>> v;
        for(auto it : mp){
            v.push_back({it.second, it.first});
        }

        sort(v.begin(), v.end());
        s[s.find(v[0].second)] = v.back().second;

        cout << s << "\n";
	}
}