#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int isPossible = 0;
        if(a+b >= 10){
            isPossible = 1;
        }else if(b+c>=10){
            isPossible = 1;
        }else if(a+c>=10){
            isPossible = 1;
        }
        
        if(isPossible){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }

    return 0;

}