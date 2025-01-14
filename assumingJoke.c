#include<stdio.h>
#include<string.h>

int main(){

    char str1[101];
    char str2[101];
    char str[101];

    scanf("%s %s %s",str1,str2,str);

    char out[201];
    strcpy(out, str1);
    strcat(out, str2);
    int n = strlen(out);

    int uniqChar[201], index= 0;
    for(int i = 0; i < n; i++){
        int isUniqe = 1;
        for(int j = 0; j < i; j++){
            if(i == j){
                continue;
            }
            if(out[i] == out[j]){
                isUniqe = 0;
                break;
            }
        }
        if(isUniqe){
            uniqChar[index] = out[i];
            index++;
        }
    }
    
    int answer = 1;

    for(int i = 0; i < index; i++){
        int ch = uniqChar[i], freq1=0, freq2=0;
        for(int j = 0; j < n; j++){
            if(ch == str[j]){
                freq1 += 1;
            }
        }
        for(int j = 0; j < n; j++){
            if(ch == out[j]){
                freq2 += 1;
            }
        }
        if(freq1 != freq2){
            answer = 0;
            break;
        }
    }

    if(strlen(out) != strlen(str)){
        answer = 0;
    }

    if(answer){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;

}