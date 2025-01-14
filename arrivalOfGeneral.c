#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int lowVal = arr[0], lowValIndex, highVal = arr[0], highValIndex;
    for(int i = 0; i < n; i++){
        if(arr[n-i-1] >= highVal){
            highVal = arr[n-i-1];
            highValIndex = n-i-1;
        }
        if(arr[i] <= lowVal){
            lowVal = arr[i];
            lowValIndex = i;
        }
    }

    if(highValIndex < lowValIndex){
        printf("%d",highValIndex + (n-lowValIndex-1));
    }else{
        printf("%d",highValIndex + (n-lowValIndex-1-1));
    }

    return 0;

}