#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int score = 0;
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                char c;
                scanf(" %c", &c);
                if(c == 'X'){
                    int a = 5;

                    if(j + 1 < a){
                        a = j + 1;
                    }
                    if(10 - j < a){
                        a = 10 - j;
                    }
                    if(k + 1 < a){
                        a = k + 1;
                    }
                    if(10 - k < a){
                        a = 10 - k;
                    }
                    score += a;
                }
            }
        }
        printf("%d\n", score);
    }

    return 0;
}
