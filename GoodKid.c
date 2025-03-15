#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);

        int arr[n];
        scanf("%d",&arr[0]);

        int min = arr[0];
        long long product = arr[0];

        for(int j = 1; j < n; j++){
            scanf("%d",&arr[j]);
            if(arr[j] < min){
                min = arr[j];
            }
            product = (product*arr[j]);
        }

        if(min != 0){
            printf("%lld\n",(product*(min+1))/min);
        }else{
            long long output = 1;
            int flag = 0;
            for(int k = 0; k < n; k++){
                if(flag == 0){
                    if(arr[k] == 0){
                        arr[k] = 1;
                        flag = 1;
                    }
                }
                output *= arr[k];
            }
            printf("%lld\n",output);
        }
    }

    return 0;

}