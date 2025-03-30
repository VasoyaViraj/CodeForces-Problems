#include<stdio.h>

void updateCount(int *score, char ch){
    *(score + (int)ch - 65) += 1;
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n, r;
        scanf("%d %d", &n, &r);
        
        int score[7] = {0};

        char str[n+1];
        scanf("%s", str);

        for(int i = 0; i < n; i++){
            updateCount(score, str[i]);
        }

        int ans = 0;
        for(int i = 0; i < 7; i++){
            if(score[i] < r){
                ans += r-score[i];
            }
        }
        printf("%d\n", ans);
        
    }

    return 0;

}