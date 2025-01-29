#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    int count1=0;
    int count2=0;

    for(int i = 0; i < t; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        if(a>b){
            count1++;
        }else if(b>a){
            count2++;
        }

    }

    if(count1 > count2){
        printf("Mishka");
    }else if(count2 > count1){
        printf("Chris");
    }else if(count1 == count2){
        printf("Friendship is magic!^^");
    }

    return 0;

}