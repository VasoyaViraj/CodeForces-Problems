#include<stdio.h>

int main(){

    int arr[10] = {1, 3, 3, 3, 2, 2, 1, 1, 1, 10};
    int distinctNumber = 0;
    int n = 10;

    for(int i = 0; i < n; i++){
        int isDistinct = 1;
        int ch = arr[i];

        for(int j = 0; j < i; j++){
            if(i == j){
                continue;
            }
            if(ch == arr[j]){
                isDistinct = 0;
                break;
            }
        }

        if(isDistinct == 1){
            distinctNumber++;
        }
    }

    printf("%d",distinctNumber);

    return 0;

}