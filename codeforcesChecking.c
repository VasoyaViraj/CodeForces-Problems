#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    int outputArr[t];

    for (int i = 0; i < t; i++) {
        char temp;
        scanf(" %c", &temp);
        if (temp == 'c' || temp == 'd' || temp == 'e' || temp == 'f' || temp == 'o' || temp == 'r' || temp == 's'){ 
            outputArr[i] = 1;
        }else{
            outputArr[i] = 0;
        }
    }

    for (int i = 0; i < t; i++) {
        if(outputArr[i]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}