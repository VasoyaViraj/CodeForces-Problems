#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        char str[11];
        scanf("%s",str);
        int n = strlen(str);
        str[n] = '\0';
        if(n == 2 && strcmp("us",str) == 1){
            printf("i\n");
        }else{
            str[n-2] = '\0';
            printf("%s%c\n",str,'i');
        }
    }

    return 0;

}