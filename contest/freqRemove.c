#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){

        char str[100];
        scanf("%s",str);

        int lenn = strlen(str);
        str[lenn] = '\0';

        int isDouble = 0;
        for(int j = 0; j < lenn-1; j++){
            if(isDouble == 1){
                break;
            }
            if(str[j] == str[j+1]){
                isDouble = 1;
            }
        }

        if(isDouble == 1){
            printf("%d\n",1);
        }else{
            printf("%d\n",lenn);
        }
    }

    return 0;

}
