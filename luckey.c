#include <stdio.h>

int main() {

    int testCases;
    scanf("%d", &testCases);

    for(int i = 0; i < testCases; i++) {

        char str[7];
        scanf("%s", str);

        int sum1 = 0, sum2 = 0;

        for(int j = 0; j < 3; j++) {
            sum1 += str[j] - '0'; 
        }
        for(int j = 3; j < 6; j++) {
            sum2 += str[j] - '0';
        }

        if(sum1 == sum2){
            printf("YES\n"); 
        }else{
            printf("NO\n");
        }
    }

    return 0;
}