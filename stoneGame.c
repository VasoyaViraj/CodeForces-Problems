#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int min, max;
        int minIdx = 1, maxIdx = 1;

        scanf("%d", &min);
        max = min;

        for (int i = 1; i < n; i++) {
            int x;
            scanf("%d", &x);

            if (x < min) {
                min = x;
                minIdx = i + 1;
            }
            if (x > max) {
                max = x;
                maxIdx = i + 1;
            }
        }

        int left = (minIdx < maxIdx ? minIdx : maxIdx);
        int right = (minIdx > maxIdx ? minIdx : maxIdx);

        int fromLeft = right;
        int fromRight = n - left + 1;
        int cross = left + (n - right + 1);

        int result = fromLeft;
        if (fromRight < result) result = fromRight;
        if (cross < result) result = cross;

        printf("%d\n", result);
    }

    return 0;
}
