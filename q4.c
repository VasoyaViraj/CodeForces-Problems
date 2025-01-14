#include<stdio.h>
#include<string.h>

int main(){

    int n, x=0;
    scanf("%d\n",&n);

    for(int i=1; i<=n;i++){
        char input[3];
        scanf("%c%c%c\n",&input[0],&input[1],&input[2]);

        if(input[1]=='+' && (input[2]=='X' || input[0] =='X')){
            x++;
        }else if(input[1]=='-' && (input[2]=='X' || input[0] =='X')){
            x--;
        }
    }
    printf("%d",x);
    
    return 0;
}