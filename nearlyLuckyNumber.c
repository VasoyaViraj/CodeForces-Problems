// lln specifier for scan f

#include<stdio.h>

int main(){

    // int number;
    long long number;
    scanf("%lld",&number);
    int islucky = 1;
    
    while(number>0){
        int num = number%10;
        if(num != 4 && num != 7){
            islucky = 0;
            break;
        }
        number = number/10;
    }

    if(islucky){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}