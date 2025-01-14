#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int untreated = 0;
    int recruted = 0;

    int arr[n];
    for(int i = 0; i < n; i++){
        int integer;
        scanf("%d",&integer);
        arr[i] = integer;

        if(integer>10){
            integer = 10;
        }

        if(integer == -1){
            if(recruted >= 1){
                recruted = recruted - 1;
            }else{
                untreated = untreated + 1;
            }
        }else{
            recruted = recruted + integer;
        }
    }

    printf("%d",untreated);

    return 0;

}