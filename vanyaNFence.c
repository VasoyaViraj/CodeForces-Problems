#include<stdio.h>

int main(){

    int n ,h, width = 0;
    scanf("%d %d",&n,&h);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(h < arr[i]){
            width = width + 2;
        }else{
            width = width + 1;
        }
    }   

    printf("%d",width);

    return 0;
}