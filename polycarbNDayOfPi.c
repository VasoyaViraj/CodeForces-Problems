#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    char pi[] = "314159265358979323846264338327";

    while(t--){
        char str[31];        
        scanf("%s", str);

        int opt = 0;
        for(int i = 0; i < strlen(str); i++){
            if(str[i] == pi[i]){
                opt += 1;
            }else{
                break;
            }
        }
        
        printf("%d\n", opt);
    }

    return 0;

}