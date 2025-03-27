#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        
        int isOddPresent = 0;
        int isEvenPresent = 0; 
        
        int sum = 0;
        int arr[n];
        for(int j = 0; j < n; j++){
            int temp;
            scanf("%d", &temp);
            arr[j] = temp;
            sum += temp;
            if(!isEvenPresent){
                if(temp%2 == 0){
                    isEvenPresent = 1;
                }else{
                    isOddPresent = 1;
                }
            }
            if(!isOddPresent){
                if(temp%2 == 0){
                    isEvenPresent = 1;
                }else{
                    isOddPresent = 1;
                }
            }
        }

        if(sum%2 == 0){
            if(isEvenPresent && isOddPresent){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            printf("YES\n");
        }
        
    }

    return 0;

}