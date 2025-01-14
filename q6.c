#include<stdio.h>

int main(){

    int arr[5][5];
    int p,q;
    int result = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for(int a = 0; a < 5; a++){
        for(int b = 0; b < 5; b++){
            if(arr[a][b] == 1){
                p = a + 1;
                q = b + 1;
            }
        }
    }

    if(p>3){
        result = result + (p-3);
    }else{
        result = result + (3-p);
    }

    if(q>3){
        result = result + (q-3);
    }else{
        result = result + (3-q);
    }

    printf("%d",result);
}