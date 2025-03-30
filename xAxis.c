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

    while(t--){

        int arr[3];
        for(int i = 0; i < 3; i++){
            scanf("%d", &arr[i]);
        }
        bubbleSort(arr, 3);
        
        printf("%d\n", arr[2]-arr[0]);
        
    }

    return 0;

}