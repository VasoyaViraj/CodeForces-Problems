#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);

        int count = 0;

        for(int j = 0; j < 2*n; j++){
            int temp;
            scanf("%d",&temp);

            if(temp%2 == 1){
                count += 1;
            }
        }
        
        if(count == n){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        
    }

    return 0;

}