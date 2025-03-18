#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);

        char str[n+1];
        scanf("%s",str);

        int len = n;
        
        for(int j = 0; j < (n/2); j++){
            if((str[j] == 48 && str[n-j-1] == 49) || (str[j] == 49 && str[n-j-1] == 48)){
                len = len - 2;
            }else{
                break;
            }
        }

        printf("%d\n",len);

    }

    return 0;

}