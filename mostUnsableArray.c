#include<stdio.h>

int main(){

    long long t;
    scanf("%lld",&t);

    while(t--){
        long long n, m;
        scanf("%lld %lld", &n, &m);
        if(n == 1){
            printf("0\n");
        }else if(n == 2){
            printf("%lld\n", m);
        }else{
            printf("%lld\n", 2*m);
        }   
    }

    return 0;

}