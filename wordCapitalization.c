#include<stdio.h>

int main(){

    char str[1001];
    scanf("%s",str);

    if(str[0]>=65 && str[0]<=90){
        printf("%s\n",str);
    }else{
        str[0]=str[0]-32;
        printf("%s\n",str);
    }

    return 0;
}