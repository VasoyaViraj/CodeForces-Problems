#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int n;
        scanf("%d",&n);

        int arr[n];
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[j]);
        }

        int flag = 1;

        for(int j = 0; j < n; j++){
            int freq = 0;
            int temp = arr[j];
            for(int k = j; k < n; k++){
                if(temp == arr[k]){
                    freq += 1;
                }
            }
            if(freq > 1){
                flag = 0;
                break;
            }
        }

        if(flag){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
       
    }

    return 0;

}