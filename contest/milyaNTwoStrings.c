#include<stdio.h>

int main(){

    // int t;
    // scanf("%d",&t);

    // for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);

        int arr1[n];
        int arr2[n];
        int arr3[n];

        for(int j = 0; j < n; j++){
            scanf("%d",&arr1[j]);
        }
        for(int j = 0; j < n; j++){
            scanf("%d",&arr2[j]);
        }
        //rearrage array1
        for(int j = 0; j < n; j++){
            arr3[j] = arr1[j] + arr2[j];
        }
        
    // }

    return 0;

}