#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d\n",&n);
    int output = 0;

    for(int i=1; i<=n;i++){
        char a, b, c;

        scanf("%c %c %c\n",&a,&b,&c);

        if(a=='1' && b=='1'){
            output++;
        }
        else if(a=='1' && c=='1'){
            output++;
        }
        else if(b=='1' && c=='1'){
            output++;
        }
    }

    printf("%d\n",output);

    return 0;
}