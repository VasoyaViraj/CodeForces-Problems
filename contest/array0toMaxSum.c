#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);

        if (n == 0) {
            if(k == 0){
                printf("0\n");
            } else {
                printf("-1\n");
            }
            continue;
        }

        int max_sum = n * p;
        int min_sum = n * (-p);

        if (k < min_sum || k > max_sum) {
            printf("-1\n");
        } else {
            if(p == 0){
                if(k == 0){
                    printf("0\n");
                } else {
                    printf("-1\n");
                }
                continue;
            }

            int positive_count = 0;
            int negative_count = 0;

            if (k >= 0) {
                positive_count = k / p;
                if (k % p != 0) {
                    positive_count++;
                }
                negative_count = 0;
            } else {
                negative_count = abs(k) / p;
                if (abs(k) % p != 0) {
                    negative_count++;
                }
                positive_count = 0;
            }

            int total_operations = 0;

            if (k >= 0) {
                total_operations = positive_count;
            } else {
                total_operations = negative_count;
            }

            if(total_operations > n){
                int diff = total_operations - n;
                if(k >=0){
                    if(positive_count >= diff){
                        positive_count = positive_count - diff;
                        total_operations = n;
                    } else {
                        total_operations = -1;
                    }
                } else {
                    if(negative_count >= diff){
                        negative_count = negative_count - diff;
                        total_operations = n;
                    } else {
                        total_operations = -1;
                    }
                }
            }
            if(total_operations != -1){
                printf("%d\n", total_operations);
            } else {
                printf("-1\n");
            }
        }
    }

    return 0;
}