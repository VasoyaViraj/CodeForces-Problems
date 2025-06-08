#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n + 2);

        int seat, flag = 1;
		cin >> seat;

		a[seat] = 1;
		for(int i = 1; i < n; i++){
			cin >> seat;
			if (a[seat + 1] == 0 && a[seat - 1] == 0) flag = 0;
			a[seat] = 1;
		}

		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}