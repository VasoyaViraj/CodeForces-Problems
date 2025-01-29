#include<stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    int max;
    if(a >= b){
        max = a;
    }else{
        max = b;
    }

    int temp = 6-max+1;

    int numerator = temp;
    int denominator = 6;

    while(denominator%2 == 0 && numerator%2 == 0){
        numerator = numerator/2;
        denominator = denominator/2;
    }

    while(denominator%3 == 0 && numerator%3 == 0){
        numerator = numerator/3;
        denominator = denominator/3;
    }

    printf("%d/%d\n",numerator,denominator);

    return 0;

}