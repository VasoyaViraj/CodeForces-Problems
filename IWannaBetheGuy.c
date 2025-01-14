#include<stdio.h>

int main(){

    int n;
    int p,q;

    scanf("%d",&n);

    scanf("%d",&p);
    int arr1[p];

    for(int i = 0; i < p; i++){
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&q);
    int arr2[q];

    for(int i = 0; i < q; i++){
        scanf("%d",&arr2[i]);
    }

    int arr[p+q];
    for(int i = 0; i < p+q; i++){
        if(i < p){
            arr[i] = arr1[i];
        }else{
            arr[i] = arr2[i-p];
        }
    }

    int output = 1;

    for(int i = 1; i <= n; i++){

        int check = 0;
        for(int j = 0; j < p+q; j++){
            if(i == arr[j]){
                check = 1;
                break;
            }
        }

        if(check == 0){
            output = 0;
            break;
        }
    }

    if(output){
        printf("I become the guy.");
    }else{
        printf("Oh, my keyboard!");
    }

    return 0;

}