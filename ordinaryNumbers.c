#include<stdio.h>

int isOrdinary(long long n){
    int lastDigit = n % 10;
    while (n > 0) {
        if (n % 10 != lastDigit) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

long long noOfOrdinary(long long n){
    long long total = 0;
    for(long long j = 1; j < n+1; j++){
        if(isOrdinary(j) == 1){
            total += 1;
        }
    }

    return total;
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",noOfOrdinary(n));
    }

    return 0;

}