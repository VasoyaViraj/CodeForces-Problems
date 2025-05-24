#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        long long a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);
        
        long long opt = 0;
        int flag = 1;

        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }

        while(a <= n && b <= n){
            if(flag){
                a += b;
                flag = 0;
                opt += 1;
            }else{
                b += a;
                flag = 1;
                opt += 1;
            }
        }
        printf("%lld\n", opt);
    }

    return 0;

}