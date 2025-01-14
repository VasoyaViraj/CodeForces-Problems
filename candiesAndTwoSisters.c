#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    int answer[t];

    for(int i = 0; i < t; i++){
        int candie;
        scanf("%d",&candie);

        if(candie%2 == 0){
            answer[i] = (candie/2) - 1;
        }else{
            answer[i] = candie/2;
        }
    }

    for(int i = 0; i < t; i++){
        printf("%d\n",answer[i]);
    }

    return 0;

}