#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    
    long long arr[n];
    for(int j = 0; j < n; j++){
        scanf("%lld", &arr[j]);
    }

    int streak = 1;
    int maximumStreak = 1;
    for(int j = 1; j < n; j++){
        if(arr[j] > arr[j-1]){
            streak += 1;
        }else{
            streak = 1;
        }

        if(streak > maximumStreak){
            maximumStreak = streak;
        }
    }

    printf("%d\n",maximumStreak);

    return 0;

}