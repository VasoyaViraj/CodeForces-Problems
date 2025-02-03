#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int number;
        scanf("%d", &number);

        int C1, C2;
        if(number%3 == 0){
            C1 = number/3;
            C2 = C1;
        }else if((number-1)%3 == 0){
            C2 = (number-1)/3;
            C1 = C2+1;
        }else if((number-2)%3 == 0){
            C1 = (number-2)/3;
            C2 = C1+1;
        }
        printf("%d %d\n", C1, C2);

    }

    return 0;

}