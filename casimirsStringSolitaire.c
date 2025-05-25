#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char str[51];
        scanf("%s", str);

        int a = 0, b = 0, c = 0;

        for(int i = 0; i < strlen(str); i++){
            if(str[i] == 'A'){
                a += 1;
            }else if(str[i] == 'B'){
                b += 1;
            }else{
                c += 1;
            }
        }

        int flag = 0;
        
        if(b >= a && b-a == c && strlen(str)%2 == 0){
            flag = 1;
        }
        
        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;

}