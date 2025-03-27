#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n, m, kk;
        scanf("%d %d %d", &n, &m, &kk);
        
        int arrA[n], arrB[m];
        for(int j = 0; j < n; j++){
            scanf("%d", &arrA[j]);
        }
        for(int j = 0; j < m; j++){
            scanf("%d", &arrB[j]);
        }

        int count = 0;
        for(int j = 0; j < n; j++){
            int temp = arrA[j];
            for(int k = 0; k < m; k++){
                if(temp + arrB[k] <= kk){
                    count += 1;
                }
            }
        }
        
        printf("%d\n", count);
    }

    return 0;

}