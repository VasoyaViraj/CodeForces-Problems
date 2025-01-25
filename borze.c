#include<stdio.h>
#include<string.h>

int main(){

    char str[201];
    scanf("%s",str);
    str[200] = '\0';

    int n = strlen(str);

    char outputString[n];
    int index = 0;

    for(int i = 0; i < n; i++){
        char temp = str[i];
        if(temp == '.'){
            outputString[index] = '0';
            index += 1;
        }else{
            if(str[i+1] == '.'){
                outputString[index] = '1';
                index += 1;
                i += 1;
            }else{
                outputString[index] = '2';
                index += 1;
                i += 1;
            }
        }
    }

    outputString[index] = '\0';

    printf("%s",outputString);

    return 0;

}