#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        
        if(n%4 == 0){
            printf("%d\n",n/4);
            continue;
        }else{
            printf("%d\n",(n/4) + 1);
        }
        
    }

    return 0;

}