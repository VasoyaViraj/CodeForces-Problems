#include<stdio.h>
#include<string.h>

int main(){

    char str[101];
    char cpy[101];

    scanf("%s",str);
    strlwr(str);

    int isDistinct;
    int index = 0;

    for(int i = 0; str[i]!='\0'; i++){
        isDistinct = 1;
        
        for(int j = 0; j < index; j++){
            if(str[i] == cpy[j]){
                isDistinct = 0;
                break;
            }
        }

        if(isDistinct){
            cpy[index] = str[i];
            index++;
        }

    }
    cpy[index] ='\0';

    if(strlen(cpy)%2 == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }

}