#include<stdio.h>

int main(){

    int n, k;
    scanf("%d %d", &n, &k);

    int time = 240 - k;
    int problemSolved = 0;
    int timeTaken = 5;
    int i = 1;

    while(problemSolved < n && time >= (timeTaken)*(i)){
        time = time - (timeTaken)*(i);
        problemSolved += 1;
        i += 1;
    }

    printf("%d",problemSolved);
}