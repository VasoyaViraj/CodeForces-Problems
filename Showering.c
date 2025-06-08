#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        long long s, m;
        scanf("%d %lld %lld", &n, &s, &m);
        
        long long arr[n*2];
        for(int i = 0; i < n; i++){
            long long l, r;
            scanf("%lld %lld", &l, &r);
            arr[i*2] = l;
            arr[i*2 + 1] = r;
        }

        int opt = 0;
        if(arr[0] >= s || (m-arr[(n*2)-1]) >= s){
            opt = 1;
        }else{
            for(int i = 1; i < (n*2)-2; i=i+2){
                if(arr[i+1]-arr[i] >= s){
                    opt = 1;
                    break;
                }
            }
        }
        
        opt ? printf("YES\n") : printf("NO\n");
    }

    return 0;

}