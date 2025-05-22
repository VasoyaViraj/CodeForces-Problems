#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        char s1[6];
        scanf("%s", s1);

        int hr = (s1[0]-48)*10 + s1[1]-48;
        int mm = (s1[3]-48)*10 + s1[4]-48;

        if(hr == 0){
            hr = 12;
            printf("%02d:%02d AM\n", hr, mm);
        }else if(hr == 12){
            printf("%02d:%02d PM\n", hr, mm);
        }else if(hr > 12){
            hr -= 12;
            printf("%02d:%02d PM\n", hr, mm);
        }else{
            printf("%02d:%02d AM\n", hr, mm);
        }
    }

    return 0;

}