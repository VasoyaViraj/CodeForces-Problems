#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int n, x;
        scanf("%d %d", &n, &x);

        if(n <=2){
            printf("1\n");
            continue;
        }

        n = n -2;

        int ans = 1;
        while(n > 0){
            n = n - x;
            ans = ans +1;
        }

        printf("%d\n", ans);
    }

    return 0;

}