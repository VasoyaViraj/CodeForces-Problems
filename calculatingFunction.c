#include<stdio.h>

int main(){

    long long n,output;
    scanf("%lld",&n);

    if(n%2 == 0){
        output = n/2;
    }else{
        output = -((n/2)+1);
    }

    printf("%lld",output);

    return 0;

}