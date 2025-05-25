#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    int arr[t][t];

    for(int i = 0; i < t; i++){
        arr[0][i] = 1;
        arr[i][0] = 1;
    }

    for(int i = 1; i < t; i++){
        for(int j = 1; j < t; j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    printf("%d\n", arr[t-1][t-1]);

    return 0;

}