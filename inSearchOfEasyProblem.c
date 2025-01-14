#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    int isEasy = 1;

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            isEasy = 0;
            break;
        }
    }

    if(isEasy){
        printf("EASY");
    }else{
        printf("HARD"); 
    }

    return 0;

}