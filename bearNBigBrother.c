#include<stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("%d",1);
    }else if(a > b){
        printf("%d",0);
    }else{
        for(int i = 1; i <= 10; i++){
            a = a*3;
            b = b*2;
            // printf("%d %d\n",a, b);
            if(a>b){
                printf("%d",i);
                break;
            }
        }
    }

    return 0;
}