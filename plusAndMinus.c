#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    char arr[t];

    for(int i = 0; i < t; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a + b == c){
            arr[i] = '+';
        }else{
            arr[i] = '-';
        }
    }

    for(int i = 0; i < t; i++){
        printf("%c\n", arr[i]);
    }

    return 0;

}