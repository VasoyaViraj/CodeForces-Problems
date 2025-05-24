#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        char str[101];
        scanf("%s", str);
        
        for(int i = strlen(str) - 1; i >= 0; i--){
            if(str[i] == 'p'){
                printf("q");
            }else if(str[i] == 'q'){
                printf("p");
            }else{
                printf("w");
            }
        }
        printf("\n");
    }

    return 0;

}