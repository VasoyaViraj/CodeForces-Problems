#include<stdio.h>

int main(){

        int n;
        scanf("%d",&n);
        
        int count = 0;

        for(int j = 1; j < n/2 +1  ; j++){
            if((n-j)%j == 0){
                count += 1;
            }
        }

        printf("%d\n",count);

    return 0;

}