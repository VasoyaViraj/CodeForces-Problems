#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        long long x, y, z;
        scanf("%lld %lld %lld", &x, &y, &z);
        
        if(x == y && y == z){
            printf("YES\n");
            printf("%lld %lld %lld\n", x , x, x);
        }else if(x == z && x > y){
            printf("YES\n");
            printf("%lld %lld %d\n", x , y, 1);
        }else if(y == z && x < y){
            printf("YES\n");
            printf("%lld %d %lld\n", x , 1, y);
        }else if(x == y && y > z){
            printf("YES\n");
            printf("%lld %lld %d\n", z , x, 1);
        }else{
            printf("NO\n");
        }
        
    }

    return 0;

}