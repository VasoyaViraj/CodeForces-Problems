#include <stdio.h>
#include <math.h>

int isPerfectSquare(long long n){
    long long root = (long long)sqrt((double)n);
    return root * root == n;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        
        long long total = 0;
        for(int j = 0; j < n; j++){
            long long temp;
            scanf("%lld", &temp);
            total += temp;
        }
        
        if(isPerfectSquare(total)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    
    return 0;
}