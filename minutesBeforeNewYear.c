#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int hr, min;
        scanf("%d %d", &hr, &min);

        printf("%d\n", ((23-hr)*60) + (60-min));
    }

    return 0;

}