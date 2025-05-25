#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        char str[6];
        scanf("%s", str);

        if(str[0] == 49 && str[1] == 48){
            if(str[2] == 49 && str[3] >= 48){
                printf("YES\n");
            }else if(str[2] > 49){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            printf("NO\n");
        }
    }

    return 0;

}