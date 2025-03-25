#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        
        int num = 1;
        int a , b;
        int eqality = 1, length = 1;

        for(int j = 0; j < n; j++){
            scanf("%d %d",&a, &b);
            if(a > 10){
                continue;
            }
            if(b > eqality){
                eqality = b;
                length = a;
                num = j+1;
            }
        }
        printf("%d\n",num);
    }

    return 0;

}