#include<stdio.h>

int main(){
    
    int n, count = 0;
    char str[51];

    scanf("%d %s",&n,str);

    for(int i = 0; i < n - 1; i++){
        if(str[i] == str[i+1]){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}