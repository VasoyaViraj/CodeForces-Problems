#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);

        if(n <= 2){
            printf("1\n");
            continue;
        }else{
            printf("%d\n", 1+ ((n-1)/2));
        }
    }

    return 0;

}