#include<stdio.h>

void bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }

        bubbleSort(arr, n);

        int ans = - arr[0] + arr[1];
        for(int j = 1; j < n-1; j++){
            if(-arr[j] + arr[j+1] < ans){
                ans = -arr[j] + arr[j+1];
            }
        }

        printf("%d\n",ans);

    }

    return 0;

}