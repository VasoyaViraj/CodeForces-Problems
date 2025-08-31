#include <bits/stdc++.h>
using namespace std;

long long intPow3(int k) {
    long long res = 1;
    for (int i = 0; i < k; i++) res *= 3;
    return res;
}

long long costOfDeal(int x) {
    if (x == 0) return 3; // special for x=0
    long long p = intPow3(x);
    return (p * (9 + x)) / 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        // base-3 like carry process
        vector<int> digits;
        long long tmp = n;
        while (tmp > 0) {
            digits.push_back(tmp % 3);
            tmp /= 3;
        }

        // carry so digits are only 0/1
        for (int i = 0; i < (int)digits.size(); i++) {
            if (digits[i] >= 2) {
                digits[i] = 0;
                if (i + 1 == (int)digits.size()) digits.push_back(0);
                digits[i + 1]++;
            }
        }

        long long ans = 0;
        for (int i = 0; i < (int)digits.size(); i++) {
            if (digits[i] == 1) ans += costOfDeal(i);
        }

        cout << ans << "\n";
    }
    return 0;
}
