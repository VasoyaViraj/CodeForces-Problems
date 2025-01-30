//incomplete
#include<stdio.h>

int findmin(int num1,int  num2){
    if(num1 <= num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);

        int arr[n];
        int countOfZeroAtEven=0, countOfOneAtOdd=0;
        int wrongZero = 0, wrongOne = 0;

        for(int j = 0; j < n; j++){
            int temp;
            scanf("%d",&temp);
            arr[i] = temp;
            if(j%2 == 0 && temp%2 != 0){
                wrongOne += 1;
            }else{
                wrongZero += 1;
            }
        }

        if(n%2 == 0){
            if(wrongOne == wrongZero){
                printf("%d\n",wrongOne);
            }else{
                printf("%d\n",-1);  
            }
        }else{
            if(wrongOne == 0 && wrongZero == 0){
                printf("%d",0);
            }else if(wrongOne == wrongZero){
                printf("%d\n",wrongOne);
            }else{
                printf("%d\n",-1);  
            }
        }




    }

    return 0;

}