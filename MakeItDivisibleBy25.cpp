#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

int solve(const string &n, int len) {
    int answer = INT_MAX;
    vector<string> pattern = {"00", "25", "50", "75"};

    for (string s : pattern) {
        int i = -1, j = -1;

        for (int k = len - 1; k >= 0; k--) {
            if (n[k] == s[1]) {
                j = k;
                break;
            }
        }
        if (j == -1) continue;

        for (int k = j - 1; k >= 0; k--) {
            if (n[k] == s[0]) {
                i = k;
                break;
            }
        }
        if (i == -1) continue;

        answer = min(answer, len - i - 2);
    }

    return answer;
}

int main() {
    Jay Shree Ram

    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n;
        int len = n.size();
        cout << solve(n, len) << "\n";
    }
    
    return 0;
}