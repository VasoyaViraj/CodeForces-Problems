#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    
    strlwr(str);
 
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'){
            continue;
        }else{
            printf(".%c",str[i]);
        }
    }
    return 0;
}