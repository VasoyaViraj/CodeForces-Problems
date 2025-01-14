#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int answer = 0;

    for(int i = 0; i < n; i++){
        char ch[20];
        scanf("%s",&ch);

        switch (ch[0]){
            case 'T' :
                answer += 4;
                break;
            case 'C' :
                answer += 6;
                break;
            case 'O' :
                answer += 8;
                break;
            case 'D' :
                answer += 12;
                break;
            case 'I' :
                answer += 20;
                break;
        }
    }

    printf("%d",answer);

    return 0;

}