#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        char s[11];
        scanf("%d", &n);
        scanf("%s", s);

        if (n != 5) {
            printf("NO\n");
            continue;
        }

        int freq[256] = {0};
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }

        if (freq['T'] == 1 && freq['i'] == 1 && freq['m'] == 1 && freq['u'] == 1 && freq['r'] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
