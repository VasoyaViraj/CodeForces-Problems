#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        char str[4];
        scanf("%s",str);
        str[3] = '\0';

        if(strcmp(str, "abc") == 0){
            printf("YES\n");
        }else{
            if(str[0] == 'a'){
                printf("YES\n");
            }else if(str[1] == 'b'){
                printf("YES\n");
            }else if(str[2] == 'c'){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }

    }

    return 0;

}