#include <stdio.h>

int main() {

    long long colors[4];
    int unique_count = 0;
    for(int i = 0; i < 4; i++){
        scanf("%lld",&colors[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (colors[i] > colors[j]) {
                long long temp = colors[i];
                colors[i] = colors[j];
                colors[j] = temp;
            }
        }
    }

    // Count unique colors
    for (int i = 0; i < 4; i++) {
        if (i == 0 || colors[i] != colors[i - 1]) {
            unique_count++;
        }
    }

    // Minimum horseshoes to buy
    printf("%d\n", 4 - unique_count);

    return 0;
}

