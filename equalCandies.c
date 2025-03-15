#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int n;
        scanf("%d",&n);

        int arr[n];
        scanf("%d", &arr[0]);
        int low = arr[0];

        for(int j = 1; j < n; j++){
            scanf("%d",&arr[j]);
            if(arr[j] < low){
                low = arr[j];
            }
        }

        int count = 0;
        for(int j = 0; j < n; j++){
            count += arr[j]-low;
        }

        printf("%d\n", count);

    }

    return 0;

}