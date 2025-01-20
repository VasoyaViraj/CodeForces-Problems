#include<stdio.h>

int main(){

    int testCases;
    scanf("%d",&testCases);

    int output[testCases];

    for(int i = 0; i < testCases; i++){

        int a, b, count=0;
        scanf("%d %d", &a, &b);

        int diff = a-b;
        if(diff < 0){
            diff = -diff;
        }else if(diff == 0){
            count = 0;
            output[i] = count;
            continue;
        }

        count = diff/10;
        if(diff%10 != 0){
            count += 1;
        }

        output[i] = count;
    }

    for(int i = 0; i < testCases; i++){
        printf("%d\n",output[i]);
    }

    return 0;

}