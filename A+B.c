#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){

        char str[4];
        scanf("%s",str);

        printf("%d\n", str[0]+str[2]-48-48);
        
    }

    return 0;

}