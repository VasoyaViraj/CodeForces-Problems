#include<stdio.h>

int checkOneOne(int x,int y){
    if(x == 1 && y == 1){
        return 1;
    }
    return 0;
}

void updatePos(int *x, int *y, char dir){
    if(dir == 'U'){
        *y += 1;
    }else if(dir == 'D'){
        *y -= 1;
    }else if(dir == 'L'){
        *x -= 1;
    }else{
        *x += 1;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        
        char str[n+1];
        scanf("%s",str);

        int flag = 0;

        int x = 0, y = 0;
        for(int j = 0; j < n; j++){
            updatePos(&x, &y, str[j]);
            if(checkOneOne(x, y) == 1){
                flag = 1;
                break;
            }
        }

        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }

    return 0;

}