#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        long long arr[n];

        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }

        long long max, xmax;
        
        if(arr[0] > arr[1]){
            max = arr[0];
            xmax = arr[1];
        } else {
            max = arr[1];
            xmax = arr[0];
        }

        for(int i = 2; i < n; i++){
            if(arr[i] > max){
                xmax = max;
                max = arr[i];
            } else if(arr[i] > xmax){
                xmax = arr[i];
            }
        }
        
        for(int i = 0; i < n; i++){
            if(arr[i] == max){
                printf("%lld ", arr[i] - xmax);
            } else {
                printf("%lld ", arr[i] - max);
            }
        }
        printf("\n");
    }

    return 0;
}