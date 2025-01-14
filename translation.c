#include<stdio.h>
#include<string.h>

int main(){
    char str1[101];
    char str2[101];
    int count;
    scanf("%s",str1);    
    scanf("%s",str2);

    if(strlen(str1) == strlen(str2)){
        for(int i=0;i<strlen(str1);i++){
            if(str1[i]==str2[strlen(str1)-1-i]){
                count = 1;
                // continue;
            }else{
                count = 0;
                break;
            }
        }
        
        if(count){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        printf("NO");
    }

    

    return 0;
}