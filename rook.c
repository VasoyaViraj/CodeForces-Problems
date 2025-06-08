#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char ch;
        int n;
        scanf(" %c%d", &ch, &n);
        
        for(int i = 1; i < 9; i++){
            if(i != n){
                printf("%c%d\n", ch, i);
            }
        }
        for(int i = 97; i < 105; i++){
            if(i != ch){
                printf("%c%d\n", i, n);
            }
        }
        
    }

    return 0;

}