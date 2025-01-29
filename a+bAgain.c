#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int temp;
        scanf("%d",&temp);
        int sum = 0;
        while(temp != 0){
            sum += temp%10;
            temp = temp/10;
        }
        printf("%d\n",sum);
    }

    return 0;

}