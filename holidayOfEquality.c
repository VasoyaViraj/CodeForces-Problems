#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    int arr[t];
    for(int i = 0; i < t; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i < t; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int result = 0;
    for(int i = 0; i < t; i++){
        result = result + max - arr[i];
    }

    printf("%d", result);

    return 0;

}