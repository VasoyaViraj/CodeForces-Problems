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
        
        int n, k;
        scanf("%d %d", &n, &k);

        int arr1[n], arr2[n];
        for(int j = 0; j < n; j++){
            scanf("%d",&arr1[j]);
        }
        for(int j = 0; j < n; j++){
            scanf("%d",&arr2[j]);
        }

        bubbleSort(arr1,n);
        bubbleSort(arr2,n);

        for(int j = 0; j < k; j++){
            if(arr2[n-j-1] > arr1[j]){
                arr1[j] = arr2[n-j-1];
            }
        }

        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr1[j];
        }
        printf("%d\n",sum);
    }

    return 0;

}