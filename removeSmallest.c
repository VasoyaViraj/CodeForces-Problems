//solved by chatgpt

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Read the elements of the array
        }

        // Sort the array
        qsort(a, n, sizeof(int), (int (*)(const void *, const void *))strcmp);
        
        // Check if the difference between any two adjacent elements is more than 1
        int possible = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] > 1) {
                possible = 0;
                break;
            }
        }

        // Output the result for this test case
        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
