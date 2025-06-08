#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            sum += temp;
        }

        if(sum == n){
            printf("%d\n", 0);
        }else if(sum > n){
            printf("%d\n", sum-n);
        }else{
            printf("%d\n", 1);
        }
        
    }

    return 0;

}