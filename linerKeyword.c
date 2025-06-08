#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getTime(char str[], char present, char next){
    int a, b;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == present){
            a = i+1;
        }
        if(str[i] ==  next){
            b = i+1;
        }
    }
    return abs(a-b);
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char keyboard[27], keys[51] ;
        scanf("%s %s", keyboard, keys);

        int opt = 0;
        for(int i = 0; i < strlen(keys)-1; i++){
            opt += getTime(keyboard, keys[i], keys[i+1]);
        }
        
        printf("%d\n", opt);
    }

    return 0;
}