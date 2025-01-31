#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int output = 0;
        char origional[] = "codeforces";
        char str[11];
        scanf("%s",str);
        str[10] = '\0';

        for(int j = 0; j < 10; j++){
            if(str[j] != origional[j]){
                output += 1;
            }
        }

        printf("%d\n",output);
    }

    return 0;

}