#include <stdio.h>

int isSortable(int arr[], int n, int k){
    if(k >= 2){
        return 1;
    }

    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    
    while (t--){
        int n, k;
        scanf("%d %d", &n, &k);
        
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        
        if(isSortable(arr, n, k)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}