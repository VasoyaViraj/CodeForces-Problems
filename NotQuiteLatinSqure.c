#include<stdio.h>

void incCount(char chr, int *a, int *b, int *c){
    if(chr == 'A'){
        *a += 1;
    }else if(chr == 'B'){
        *b += 1;
    }else{
        *c += 1;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        
        char str1[4], str2[4], str3[4];
        int a = 0, b = 0, c = 0;
        scanf("%s %s %s", str1, str2, str3);

        for(int j = 0; j < 3; j++){
            incCount(str1[j], &a, &b, &c);
        }
        for(int j = 0; j < 3; j++){
            incCount(str2[j], &a, &b, &c);
        }
        for(int j = 0; j < 3; j++){
            incCount(str3[j], &a, &b, &c);
        }

        if(a == 2){
            printf("A\n");
        }else if(b == 2){
            printf("B\n");
        }else{
            printf("C\n");
        }
        
    }

    return 0;

}