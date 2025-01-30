#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        char str1[4], str2[4];
        scanf("%s %s",str1,str2); 
        str1[3] = '\0';
        str2[3] = '\0';

        char temp = str1[0];

        str1[0] = str2[0];
        str2[0] = temp;

        printf("%s %s\n",str1,str2);
    }

    return 0;

}