#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    printf("%d\n",t/2);
    for(int i = 0; i < (t/2) - 1; i++){
        printf("2 ");
    }

    if(t%2 == 1){
        printf("3");
    }else{
        printf("2");
    }

    return 0;

}