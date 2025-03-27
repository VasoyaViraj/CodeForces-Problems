#include<stdio.h>

typedef long long ll;

int main(){

    ll t;
    scanf("%lld",&t);

    for(ll i = 0; i < t; i++){

        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        if(a>b){
            a = a - b;
            if(a > c){
                a = a -c;
                if(a!=0){
                    printf("First\n");
                }
            }else{
                c = c - a;
                if(c%2 == 0){
                    printf("Second\n");
                }else{
                    printf("First\n");
                }
            }
        }else if(a<b){
            b = b - a;
            if(b > c){
                b = b -c;
                if(b!=0){
                    printf("Second\n");
                }
            }else{
                c = c - b;
                if(c%2 == 0){
                    printf("Second\n");
                }else{
                    printf("First\n");
                }
            }
        }else{
            if(c%2 == 0){
                printf("Second\n");
            }else{
                printf("First\n");
            }
        }
        
    }

    return 0;

}