#include<stdio.h>
#include<string.h>

void absVal(int *num){
    if(*num < 0){
        *num = -1 * (*num);
    }
}

int sortestRotates(char one, char two){
    int a = one - two;
    absVal(&a);
    int b = 26 - a;
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int main(){

    char str[101];
    scanf("%s",str);

    int n = strlen(str);
    int ans = 0;
    for(int j = 0; j < n-1; j++){
        ans = ans + sortestRotates(str[j],str[j+1]);
    }

    printf("%d\n",ans+sortestRotates('a',str[0]));

    return 0;

}