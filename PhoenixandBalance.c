#include<stdio.h>
#include<math.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        float opt = 0;
        for(int i = 0; i < (n/2); i++){
            opt += pow(2.00, (float)i+1);
        }

        printf("%d\n", (int)opt);
    }

    return 0;

}