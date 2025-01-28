#include<stdio.h>


int main(){

    int t;
    scanf("%d",&t);

    int outputArr[t];

    for(int i = 0; i < t; i++){

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int medium;

        if((a < b && a > c) || (a < c && a > b) ){
            outputArr[i] = a;
        }else if((b < a && b > c) || (b < c && b > a) ){
            outputArr[i] = b;
        }else{
            outputArr[i] = c;
        }

    }

    for(int i = 0; i < t; i++){
        printf("%d\n",outputArr[i]);
    }

    return 0;

}