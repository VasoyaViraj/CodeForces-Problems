#include<stdio.h>
#include<string.h>

int main(){

    char str[101];
    int toLower = 0, toUpper = 0; 
    scanf("%s",str);

    for(int i = 0; str[i]!='\0'; i++){
        if(str[i] <= 90 && str[i] >= 65){
            toUpper++;
        }else{
            toLower++;
        }
    }

    if(toUpper > toLower){
        strupr(str);
    }else{
        strlwr(str);
    }

    printf("%s",str);

    return 0;
}