#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        
        if( (n*m) %2 == 0 ){
            printf("%d\n", n*m/2);
        }else{
            printf("%d\n", (n*m/2) + 1);
        }
        
    }

    return 0;

}