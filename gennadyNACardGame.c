#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d", &t);

    while(t--){

        float a , b, c;
        scanf("%f %f %f", &a, &b, &c);

        if(b > a){
            float temp = a;
            a = b;
            b = temp;
        }

        float eqPoint = (a+b)/2;

        int count = 0;

        while(b < eqPoint){
            count += 1;
            b += c;
        }
        
        printf("%d\n", count);
        
    }

}