#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        
        int arr[n];
        int index = 0;

        char str[n+1];
        scanf("%s", str);

        for(int i = 0; i < n; i++){
            if(str[i] == 'B'){
                arr[index] = i+1;
                index += 1;
            }
        }

        int opt = 0;
        if(index > 0){
            opt = 1;
        }
        for(int i = 1; i < index; i++){
            if(arr[i] - arr[i-1] >= k){
                opt += 1;
            }else{
                arr[i] = arr[i-1];
            }
        }

        printf("%d\n", opt);
        
    }

    return 0;

}