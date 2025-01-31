#include<stdio.h>

int checkLength(int n){
    if (n < 10) {
        return 1;
    } else if (n < 100) {
        return 2;
    } else if (n < 1000) {
        return 3;
    } else {
        return 4;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);

        int lenght = checkLength(n);
        int digit = n%10;
        int output = 0;

        output += (digit-1)*10;
        if(lenght == 1){
            output += 1;
        }else if(lenght == 2){
            output += 3;
        }else if(lenght == 3){
            output += 6;
        }else{
            output += 10;
        }
        
        printf("%d\n",output);
        
    }

    return 0;

}