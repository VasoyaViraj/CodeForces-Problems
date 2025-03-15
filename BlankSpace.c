#include<stdio.h>

int maxx(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
    
        int n;
        scanf("%d", &n);

        int arr[n];
        int maxStreak = 0;
        int currentStreak = 0;

        for(int j = 0; j < n; j++){
            scanf("%d",&arr[j]);
            if(arr[j] == 0){
                currentStreak += 1;
                maxStreak = maxx(maxStreak, currentStreak);
            }else{
                currentStreak = 0;
            }
        }

        printf("%d\n", maxStreak);

    }

    return 0;

}