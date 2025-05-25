#include<stdio.h>

int main(){

    long long t, x;
    scanf("%lld %lld", &t, &x);

    long long opt = x;
    long long out = 0; 
    
    char chr;
    long long n;

    while(t--){

        scanf(" %c %lld", &chr, &n);
        
        if(chr == '+'){
            opt += n;
        }else{
            if(n > opt){
                out += 1;
            }else{
                opt -= n;
            }
        }

    }

    printf("%lld %lld\n", opt, out);

    return 0;

}