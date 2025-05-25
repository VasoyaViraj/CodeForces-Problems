#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char str[11];
        scanf("%s",str);

        int idx;
        int flag = 0;
        char a, b;

        for(int i = 0; i < strlen(str)-1; i++){
            if(str[i] != str[i+1]){
                flag = 1;
                idx = i;
                a = str[i];
                b = str[i+1];
                break;
            }
        }

        if(flag){
            str[idx] = b;
            str[idx+1] = a;
            printf("YES\n%s\n", str);
        }else{
            printf("NO\n");
        }
    }

    return 0;

}