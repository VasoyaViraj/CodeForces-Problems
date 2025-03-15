#include<stdio.h>

int maxx(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

int minn(int a, int b){
    if (a < b){
        return a;
    }else{
        return b;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int a , b;
        scanf("%d %d", &a, &b);
        
        if(minn(a,b) == a){
            a *= 2;
        }else{
            b *= 2;
        }

        if(maxx(a,b) == a){
            printf("%d\n",a*a);
        }else{
            printf("%d\n",b*b);
        }

    }

    return 0;

}