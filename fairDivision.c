#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int count_1 = 0, count_2 = 0;
        
        for (int i = 0; i < n; i++) {
            int candy_weight;
            scanf("%d", &candy_weight);
            if (candy_weight == 1) {
                count_1++;
            } else {
                count_2++;
            }
        }
        
        int total_weight = count_1 * 1 + count_2 * 2;

        if (total_weight % 2 != 0) {
            printf("NO\n");
        } else {
            int target = total_weight / 2;
            
            int max_2_candies = target / 2;
            if (max_2_candies <= count_2) {
                target -= max_2_candies * 2;
            } else {
                target -= count_2 * 2;
            }
            
            if (target <= count_1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}
