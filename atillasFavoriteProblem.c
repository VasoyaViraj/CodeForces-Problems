#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        
        char str[n+1];
        scanf("%s",str);

        int max = 0;
        for(int j = 0; j < n; j++){
            if(str[j] > max){
                max = str[j];
            }
        }

        printf("%d\n",max-'a'+1);
    }

    return 0;
}