#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int a, b;
        scanf("%d %d", &a, &b);

        if(a >= b){
            printf("%d %d\n", b, a);
        }else{
            printf("%d %d\n", a, b);
        }

    }

    return 0;

}