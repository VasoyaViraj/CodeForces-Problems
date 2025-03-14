#include<stdio.h>

int sumOfDigits(int number){
    int tempp = number;
    int sum = 0;
    while(tempp != 0){
        int lastDigit = tempp%10;
        sum += lastDigit;
        tempp = tempp/10;
    }
    return sum;
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int x, y;
        scanf("%d %d", &x, &y);

        int flag = 0;

        if(x == y){
            flag = 0;
        }else if(y == x+1){
            flag = 1;
        }else if(x%9 == 0 && y==1){
            flag = 1;
        }else if(x == y+8){
            flag = 1;
        }
        
        if (flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }

    return 0;

}


