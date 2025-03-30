#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        
        int firstIn = 0;
        int lastIn = n-1;
        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                printf("%d ", arr[firstIn]);
                firstIn += 1;
            }else{
                printf("%d ", arr[lastIn]);
                lastIn -= 1;
            }
        }
        printf("\n");
    }

    return 0;

}