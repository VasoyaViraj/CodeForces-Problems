#include<stdio.h>

int main(){

    int m, n;
    scanf("%d %d",&m,&n);
    int end = 1;

    for(int i = 1; i <=m; i++){
        for(int j = 1; j <= n; j++){
            if(i%2 != 0){
                printf("#");
            }else{
                if(end){
                    if(j == n){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }else{ 
                    if(j == 1){
                        printf("#");
                    }else{
                        printf(".");
                    } 
                }
            }
        }
        
        if(i%2 == 0){
            if(end == 1){
                end = 0;
            }else{
                end = 1;
            }
        }
        printf("\n");
    }

    return 0;

}