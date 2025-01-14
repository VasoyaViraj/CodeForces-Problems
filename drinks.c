#include<stdio.h>

int main(){

    float n;
    scanf("%f",&n);

    int sum = 0;
    
    for(int i = 0; i < n; i++){
        int fraction;
        scanf("%d",&fraction);
        sum += fraction;
    }

    printf("%f",sum/n);

    return 0;

}