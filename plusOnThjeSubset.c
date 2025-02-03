#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        scanf("%d", &arr[0]);

        int min = arr[0], max = arr[0];
        for (int j = 1; j < n; j++) {
            int temp;
            scanf("%d", &temp);
            arr[j] = temp;

            if (temp > max) {
                max = temp;
            }
            if (temp < min) {
                min = temp;
            }
        }

        printf("%d\n", max - min);

    }

    return 0;
}
