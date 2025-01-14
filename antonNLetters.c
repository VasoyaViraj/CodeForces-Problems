#include<stdio.h>
#include<string.h>

int main(){

    char str[1001];
    gets(str);
    int n = strlen(str)/3;
    int arr[n];

    int index=0;
    for(int i = 1; index <= n; i++){
        arr[index] = str[i];
        i = i+2;
        index = index + 1;
    }

    int distinctNumber = 0;

    for(int i = 0; i < n; i++){
        int isDistinct = 1;

        for(int j = 0; j < i; j++){
            if(i == j){
                continue;
            }
            if(arr[i] == arr[j]){
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