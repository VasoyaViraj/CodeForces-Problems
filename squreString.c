#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        char mainStr[101];
        scanf("%s", mainStr);
        int length = strlen(mainStr);
        mainStr[length] = '\0';
        int by2 = length / 2;

        if(length%2 == 1){
            printf("NO\n");
        }else{
            char str1[by2 + 1];
            char str2[by2 + 1];
            
            for(int j = 0; j < by2; j++){
                str1[j] = mainStr[j];
            }
            str1[by2] = '\0';

            for(int j = by2; j < length; j++){
                str2[j - by2] = mainStr[j];
            }
            str2[by2] = '\0';

            // printf("%s\n", str1);
            // printf("%s\n", str2);

            if(strcmp(str1, str2) == 0){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }

    }

    return 0;
}
