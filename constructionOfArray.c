#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        
        if((n / 2) % 2 != 0){
            printf("NO\n");
        }else{
            printf("YES\n");
            
            int sum1 = 0, sum2 = 0;
            int arr1[n / 2], arr2[n / 2];
            
            for (int i = 0; i < n / 2; i++) {
                arr1[i] = 2 * (i + 1);
                sum1 += arr1[i];
            }
            
            for (int i = 0; i < n / 2 - 1; i++) {
                arr2[i] = 2 * i + 1;
                sum2 += arr2[i];
            }
            
            arr2[n / 2 - 1] = sum1 - sum2;
            
            for (int i = 0; i < n / 2; i++) {
                printf("%d ", arr1[i]);
            }

            for (int i = 0; i < n / 2; i++) {
                printf("%d ", arr2[i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}