#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int output = 0;

    for(int i = 1; i <= n; i++){
        int living, capacity;
        scanf("%d %d",&living,&capacity);
        if(capacity - living >= 2){
            output = output + 1;
        }
    }

    printf("%d", output);

    return 0;

}