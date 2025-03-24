#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        
        if(b<a*2){
            printf("%d\n",(n/2)*b + (n%2)*a);
        }else{
            printf("%d\n",n*a);
        }
    }

    return 0;

}