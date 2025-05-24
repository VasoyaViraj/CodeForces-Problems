#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 2; j++){
                int flag = (i%2 == 0) ? 1 : 0;
                for(int k = 0; k < n; k++){
                    if(flag){
                        if(k%2 == 0){
                            printf("##");
                        }else{
                            printf("..");
                        }
                    }else{
                        if(k%2 == 0){
                            printf("..");
                        }else{
                            printf("##");
                        }
                    }
                }
                printf("\n");
            }
        }
        
    }

    return 0;

}