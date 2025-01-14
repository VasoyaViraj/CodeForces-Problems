#include<stdio.h>

int main(){

    int number, time;
    scanf("%d %d",&number,&time);
    char str[number];
    // char output[number];
    scanf(" %s",str);

    if(number>=1 && time <= 50){
        for(int j = 1; j <= time; j++){
            for(int  i = 0; i < number-1; i++){
                if(str[i] == 'B' && str[i+1] == 'G'){
                    str[i] = 'G';
                    str[i+1] = 'B';
                    i++;
                }
            }
        }
    }

    printf("%s",str);
    return 0;
}