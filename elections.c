#include<stdio.h>

long long calcVote(long long n, long long max, int maxFreq){
    if(max == n){
        return maxFreq == 1 ? 0 : 1;
    }else{
        return max-n+1;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        long long a, b , c;
        scanf("%lld %lld %lld", &a, &b, &c);

        long long max;
        if(a >= b && a >= c){
            max = a;
        }else if(b >= a && b >= c){
            max = b;
        }else{
            max = c;
        }

        int maxFreq = 0;
        if(a == max){
            maxFreq += 1;
        }
        if(b == max){
            maxFreq += 1;
        }
        if(c == max){
            maxFreq += 1;
        }
        
        printf("%lld %lld %lld\n", calcVote(a, max, maxFreq), calcVote(b, max, maxFreq), calcVote(c, max, maxFreq));
           
    }

    return 0;

}