#include<stdio.h>

int isComposite(int num){
    int isComposite = 0;

    for(int i = 2; i*i <= num; i++){
        if(num%i == 0){
            isComposite = 1;
            break;
        }
    }

    return isComposite;
}

int main(){

    int number;
    scanf("%d",&number);

    for(int i = 1; i <= (number/2); i++){
        if(isComposite(i)){
            if(isComposite(number-i)){
                printf("%d %d", i, number-i);
                break;
            }
        }
    }

    return 0;

}