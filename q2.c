#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);

    for(int i =0; i < n;i++){
        char input[100];
        scanf("%s",input);

        if(strlen(input) > 10){
            printf("%c%d%c\n",input[0],strlen(input)-2,input[strlen(input) - 1]);
        }else{
            printf("%s\n",input);
        }
    }

    return 0;
}