#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    int output[t];

    for(int i = 0; i < t; i++){
        int rating;
        scanf("%d",&rating);

        if(rating >= 1900){
            output[i] = 1;
        }else if(rating < 1900 && rating >= 1600){
            output[i] = 2;
        }else if(rating < 1600 && rating >= 1400){
            output[i] = 3;
        }else{
            output[i] = 4;
        }
    }

    for(int i = 0; i < t; i++){
        printf("Division %d\n",output[i]);
    }

    return 0;

}