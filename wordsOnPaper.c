#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){

        for(int j = 0; j < 8; j++){
            char str[9];
            scanf("%s",str);

            for(int k = 0; k < 8; k++){
                if(str[k] != '.'){
                    printf("%c",str[k]);
                }
            }
        }
        printf("\n");
    }

    return 0;

}