#include<stdio.h>

int positive(int number){
    int num = number;
    if(num < 0){
        num = num*(-1);
    }
    return num;
}

int main(){

    int x[3];
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    int max=x[1],min=x[1];
    for(int i = 0; i < 3; i++){
        if(x[i] >= max){
            max = x[i];
        }
        if(x[i] <= min){
            min = x[i];
        }
    }
    

    int minDistance = 100;

    for(int i = min; i <= max; i++){
        int distance;
        distance = positive(i-x[0]);
        distance += positive(i-x[1]);
        distance += positive(i-x[2]);
        if(distance < minDistance){
            minDistance = distance;
        }
    }

    printf("%d",minDistance);


    return 0;

}