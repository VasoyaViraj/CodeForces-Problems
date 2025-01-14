#include<stdio.h>

int main(){

    int a,b,x,y;

    scanf("%d %d", &a, &b);

    if(a > b){
        x = b;
    }else{
        x = a;
    }

    if(a-x == 0){
        y = (b-a)/2;
    }else if(b-x == 0){
        y = (a-b)/2;
    }

    printf("%d %d", x, y);

    return 0;

}