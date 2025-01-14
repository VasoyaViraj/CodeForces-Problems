#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n], output[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        output[arr[i]-1] = i + 1;
    }

    for(int k = 0; k < n; k++){
        printf("%d d",output[k]);
    }
    
    return 0;

}