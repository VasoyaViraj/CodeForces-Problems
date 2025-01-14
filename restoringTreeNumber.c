#include<stdio.h>

int main(){

    int p,q,r,total;
    scanf("%d %d %d %d", &p, &q, &r, &total);

    int arr[] = {p,q,r,total};

    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return 0;

}