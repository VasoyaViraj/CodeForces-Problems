#include<stdio.h>

int main(){

    int number, n;
    scanf("%d %d",&number, &n);

    if(number < 10){
        for(int j = 1; j <= n; j++){
            number = number - 1;
        }
    }else{
        for(int i = 1; i <= n; i++){
            if(number%10 == 0){
                number = number/10;
            }else{
                number = number - 1;
            }
        }
    }

    printf("%d",number);

    return 0;
}