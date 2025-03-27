#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        long long n;
        scanf("%lld",&n);

        long long even = 0, odd = 0;
        long long num;
        while(n--){
            scanf("%lld", &num);
            if(num%2==0){
                even+=num;
            }else{
                odd+=num;
            }
        }
        if(even > odd){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }

    return 0;

}