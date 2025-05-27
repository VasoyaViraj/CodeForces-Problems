#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int m, a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);

        int row1 = m, row2 = m;
        int opt = 0;

        if(a >= m){
            opt += m;
            row1 = 0;
        }else{
            opt += a;
            row1 -= a;
        }

        if(b >= m){
            opt += m;
            row2 = 0;
        }else{
            opt += b;
            row2 -= b;
        }

        if(c >= (row1+row2)){
            opt += (row1+row2);
        }else{
            opt += c;
        }

        printf("%d\n", opt);
    }

    return 0;

}