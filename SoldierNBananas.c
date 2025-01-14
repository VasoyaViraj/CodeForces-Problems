#include<stdio.h>

int main(){

    int hasMoney, noOfBananas, price;
    int totalBill = 0;

    scanf("%d %d %d",&price,&hasMoney,&noOfBananas);

    if( hasMoney >= 0 && noOfBananas <= 1000 && price >= 1){

        for(int i = 1; i <= noOfBananas; i++){
            totalBill += i*price;
        }

        if(totalBill <= hasMoney){
            printf("%d", 0);
        }else{
            printf("%d",totalBill - hasMoney);
        }
    }


    return 0;
}