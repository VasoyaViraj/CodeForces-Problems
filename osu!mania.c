#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j = 0; j < n; j++){
            char str[5];
            scanf("%s",str);
            for(int k = 0; k < 4; k++){
                if(str[k] == '#'){
                    arr[j] = k+1;
                }
            }
        }
        for(int j = n-1; j >= 0; j--){
            printf("%d ",arr[j]);
        }
        printf("\n");
        
    }

    return 0;

}