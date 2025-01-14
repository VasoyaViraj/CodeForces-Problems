#include<stdio.h>

int main(){

    int price, r, count = 1;
    scanf("%d %d",&price, &r);

    int copy = price;


    while(1){
        if(price%10 == r || price%10 == 0){
            break;
        }

            price += copy;
            count++;


    }


    printf("%d",count);
    return 0;

}