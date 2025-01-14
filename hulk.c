#include<stdio.h>

int main(){

    int n, count = 0;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        if(i%2 == 0 && i != n){
            printf("I love that");
        }else if(i%2 == 0 && i == n){
            printf("I love it");
        }else if(i%2 != 0 && i == n){
            printf("I hate it");
        }else if(i%2 != 0 && i != n){
            printf("I hate that");
        }

        if(i != n){
            printf(" ");
        }
    }

    return 0;

}