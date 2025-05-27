#include<stdio.h>
#include<string.h>

int main(){

    char str1[51], str2[51];
    scanf("%s %s", str1, str2);

    int len2 = strlen(str2), len1 = strlen(str1);
    int index = 0, position = 1;

    for(int i = 0; i < len2; i++){
        if(str2[i] == str1[index]){
            position += 1;
            index += 1;
        }
    }

    printf("%d\n", position);

    return 0;

}