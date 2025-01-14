#include<stdio.h>
#include<string.h>

int main(){

    int n,output=1;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    str[n] = '\0';
    strupr(str);
    
    if(strlen(str) < 26){
        output = 0;
    }else{
        for(char i = 'A'; i <= 'Z'; i++){
            int check = 0;
            for(int j = 0; j < n; j++){
                if(i == str[j]){
                    check = 1;
                    break;
                }
            }
            if(check == 0){
                output = 0;
                break;
            }
        }
    }

    if(output){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;

}