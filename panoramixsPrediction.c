#include <stdio.h>
#include <math.h>

int checkPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a + 1; i <= b; i++) {
        if (checkPrime(i)) {
            if (i == b) {
                printf("YES\n");
                return 0;
            } else {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}
