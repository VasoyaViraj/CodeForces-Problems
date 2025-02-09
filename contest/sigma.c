#include<stdio.h>

int main(){

    // int t;
    // scanf("%d",&t);

    // for(int i = 0; i < t; i++){
        
        int arr[] = {3,4,5,1,1,9};

        int sum = 0; 
        for(int j = 0; j < 6; j++){
            sum += (6-j)*(arr[j]);
        }

        printf("%d",sum);

    // }

    return 0;

}