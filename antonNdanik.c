#include<stdio.h>
#include<string.h>

int main(){

    int n;
    char str[1000001];
    int nOfAnton = 0;

    scanf("%d %s",&n,str);

    for (int  i = 0; i < strlen(str); i++){
        if(str[i] == 'A'){
            nOfAnton++;
        }
    }

    //printf("%d\n",nOfAnton);

    if(nOfAnton > strlen(str) - nOfAnton){
        printf("Anton");
    }else if(nOfAnton == strlen(str) - nOfAnton){
        printf("Friendship");
    }else{
        printf("Danik");
    }
    
    return 0;
}