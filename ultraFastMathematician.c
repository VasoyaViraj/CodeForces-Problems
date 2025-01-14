#include<stdio.h>
#include<string.h>

int main(){

    char n1[101],n2[101];
    scanf("%s %s",&n1,&n2);
    int n = strlen(n1);
    char output[n+1];

    for(int i = 0; i < n; i++){
        if(n1[i] == n2[i]){
            output[i] = '0';
        }else{
            output[i] = '1';
        }
    }
    output[n] = '\0';
    printf("%s",output);

    return 0;

}