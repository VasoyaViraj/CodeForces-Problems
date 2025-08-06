#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        long long n, c, count = 0;
        cin >> n >> c;

        vector<long long> vec(n);
        for (auto& x : vec) cin >> x;

        while (true) {
            long long maxVal = 0;
            int maxIndex = -1;

            for (int i = 0; i < vec.size(); i++) {
                if (vec[i] <= c && vec[i] > maxVal) {
                    maxVal = vec[i];
                    maxIndex = i;
                }
            }

            if (maxIndex == -1) break;

            vec.erase(vec.begin() + maxIndex);
            count++;

            for (auto& x : vec) {
                x *= 2;
            }
        }

        cout << n - count << "\n";
    }

    return 0;
}
