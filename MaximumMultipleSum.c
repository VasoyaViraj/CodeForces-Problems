#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int n;
        scanf("%d",&n);

        if(n <= 3){
            printf("%d\n",n);
        }else{
            printf("2\n");
        }

    }

    return 0;

}