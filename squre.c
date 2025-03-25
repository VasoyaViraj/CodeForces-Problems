#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){

        int initX, initY;
        int x, y;
        int ans;
        scanf("%d %d", &initX, &initY);

        for(int j = 0; j < 3; j++){
            scanf("%d %d", &x, &y);
            if(initX == x){
                ans = (initY-y)*(initY-y);
            }
        }
        printf("%d\n",ans);
        
    }

    return 0;

}