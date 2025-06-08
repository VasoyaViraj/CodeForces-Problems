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

int countFreq(int *arr, int n, int num){
    int frq = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) == num){
            frq += 1;
        }
    }
    return frq;
}

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

        bubbleSort(arr, n);

        int lenC = countFreq(arr, n, arr[n-1]);

        if(n == lenC){
            printf("-1\n");
        }else{
            printf("%d %d\n", n-lenC, lenC);
            for(int i = 0; i < n-lenC; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
            for(int i = 0; i < lenC; i++){
                printf("%d ", arr[n-1]);
            }
            printf("\n");
        }
    }

    return 0;

}