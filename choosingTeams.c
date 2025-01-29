#include<stdio.h>

int main(){

    int numberofPlayers, noOfTimes;
    scanf("%d %d", &numberofPlayers, &noOfTimes);
    int times[numberofPlayers];

    for(int i = 0; i < numberofPlayers; i++){
        scanf("%d",&times[i]);
    }

    int count= 0;

    for(int i = 0; i < numberofPlayers; i++){
        if(times[i] + noOfTimes <= 5){
            count++;
        }
    }

    printf("%d", count/3);

    return 0;

}