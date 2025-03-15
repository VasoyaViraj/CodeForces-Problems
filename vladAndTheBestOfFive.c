#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        char str[6];
        scanf("%s",str);

        int frqA = 0, frqB = 0;

        for(int j = 0; j < 5; j++){
            if(str[j] == 'A'){
                frqA += 1;
            }else{
                frqB += 1;
            }
        }

        if(frqA > frqB){
            printf("%c\n",'A');
        }else{
            printf("%c\n",'B');
        }

    }

    return 0;

}