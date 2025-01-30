#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);

        int x = n - (n % a) + b;
        if (x > n) {
            x -= a;
        }

        printf("%d\n", x);
    }

    return 0;
}
