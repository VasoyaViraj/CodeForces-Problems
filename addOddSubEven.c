#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        
        if(a-b == 0){
            printf("0\n");
        }else{
            if(b > a){
                if((b-a)%2 == 0){
                    printf("2\n");
                }else{
                    printf("1\n");
                }
            }else if(a > b){
                if((a-b)%2 == 0){
                    printf("1\n");
                }else{
                    printf("2\n");
                }
            }
        }
        
    }

    return 0;

}