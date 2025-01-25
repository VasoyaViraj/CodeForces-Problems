#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int output[t];

    for (int i = 0; i < t; i++) {

        int n;
        scanf("%d", &n);

        int arr[n];

        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        if (arr[0] != arr[1] && arr[0] != arr[2]) {
            output[i] = 1;
        } else {
            for (int j = 1; j < n; j++) {
                if (arr[j] != arr[0]) {
                    output[i] = j + 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", output[i]);
    }

    return 0;
}
