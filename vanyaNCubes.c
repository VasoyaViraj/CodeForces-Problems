#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int height = 0;
    int sum = 0;
    int cubes_needed_for_level = 0;

    for (int i = 1; ; i++) {
        cubes_needed_for_level += i;
        if (sum + cubes_needed_for_level <= n) {
            sum += cubes_needed_for_level;
            height++;
        } else {
            break;
        }
    }

    printf("%d\n", height);

    return 0;
}