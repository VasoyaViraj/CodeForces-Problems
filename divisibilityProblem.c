#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int outputArr[n];

    for(int i = 0; i < n; i++){
        long long a, b; 
        int count=0;
        scanf("%lld %lld",&a,&b);
        if(a%b == 0){
            outputArr[i] = 0;
        }else{
            outputArr[i] = b - a%b;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\n",outputArr[i]);
    }

    return 0;

}