#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        for(int j = 0; j < 5; j++){
            if(a<=b && a<= c){
                a += 1;
            }else if(b <= a && b <= c){
                b += 1;
            }else{
                c += 1;
            }
        }

        printf("%d\n", a*b*c);
        
    }

    return 0;

}