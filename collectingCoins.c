#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int arr[3];
        int n;

        for(int j = 0; j < 3; j++){
            scanf("%d",&arr[j]);
        }
        scanf("%d",&n);

        int neededCoin = 0;
        if(arr[0] >= arr[1] && arr[0] >= arr[2]){
            neededCoin = (2*arr[0]) - arr[1] - arr[2];
        }else if(arr[1] >= arr[0] && arr[1] >= arr[2]){
            neededCoin = (2*arr[1]) - arr[0] - arr[2];
        }else{
            neededCoin = (2*arr[2]) - arr[1] - arr[0];
        }

        if(neededCoin > n){
            printf("NO\n");
            continue;
        }

        n = n -neededCoin;
        if(n%3 == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }

    return 0;

}