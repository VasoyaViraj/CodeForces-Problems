#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        char str[101];
        scanf("%s", str);
        
        int is3Dot = 0;
        int freq = 0;

        for(int i = 0; i < n-2; i++){
            if(str[i] == '.'){
                freq += 1;
                if(str[i+1] == '.' && str[i+2] == '.'){
                    is3Dot = 1;
                }
            }
        }
        if(str[n-2] == '.'){
            freq += 1;
        }
        if(str[n-1] == '.'){
            freq += 1;
        }

        is3Dot ? printf("2\n") : printf("%d\n", freq);
        
    }        

    return 0;

}