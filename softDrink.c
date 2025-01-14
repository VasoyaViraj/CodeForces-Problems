#include<stdio.h>

int main(){

    int n, k, l, c, d, p, nl, np;
    int result;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np );

    int c1 = (k*l)/nl;
    int c2 = c*d;
    int c3 = (p)/(np);

    if(c1 < c2 && c1<c3){
        printf("%d",c1/n);
    }else if(c2 < c1 && c2<c3){
        printf("%d",c2/n);
    }else{
        printf("%d",c3/n);
    }


    return 0;

}