#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int output[n];

    for(int i = 0; i < n; i++){

        int length;
        scanf("%d",&length);

        int arr[length];

        for(int jk = 0; jk < length; jk++){
            scanf("%d",&arr[jk]);
        }

        for(int j = 0; j < length; j++){
            int num = arr[j];
            for(int k = j+1; k < length; k++){
                // if( num-arr[k] <=1 &&  )
            }
        }
    }

    return 0;

}