#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    
    int arrCountNumber[t];
    int outputArr[t][5];

    for(int i = 0; i < t; i++){
        int number, count=0;
        scanf("%d",&number);

        int power=1;
        while(number != 0){
            int digit = number%10;
            if(digit != 0){
                outputArr[i][count] = digit*power;
            count = count + 1;
            }
            power = power*10;
            number = number / 10;
        }

        arrCountNumber[i] = count;

    }

    for(int i = 0; i < t; i++){
        printf("%d\t",arrCountNumber[i]);
        for(int j = 0; j < arrCountNumber[i]; j++){
            printf("%d ",outputArr[i][j]);
        }
        printf("\n");
    }

    return 0;

}