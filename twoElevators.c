#include<stdio.h>

int abss(int x, int y){
    if(x-y > 0){
        return x-y;
    }
    return y-x;
}

int timeL1(int a){
    return abss(a, 1);
}

int timeL2(int b, int c){
    return abss(b, c) + abss(c, 1);
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        int l1 = timeL1(a);
        int l2 = timeL2(b, c);

        if(l1 < l2){
            printf("1\n");
        }else if(l2 < l1){
            printf("2\n");
        }else{
            printf("3\n");
        }
        
    }

    return 0;

}