#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        int n, k;
        scanf("%d %d", &n, &k);
                
        int gold = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            if(temp >= k){
                gold += temp;
            }else if(temp == 0 && gold > 0){
                gold -= 1;
                count += 1;
            }
        }

        printf("%d\n", count);
    }

    return 0;

}