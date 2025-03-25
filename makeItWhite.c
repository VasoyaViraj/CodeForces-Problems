#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);

        char str[n+1];
        scanf("%s",str);

        int firstIndex = -1 , lastIndex = -1;

        for(int j = 0; j < n; j++){
            if(str[j] == 'B'){
                firstIndex = j;
                break;
            }
        }
        for(int j = n-1; j > -1 ; j--){
            if(str[j] == 'B'){
                lastIndex = j;
                break;
            }
        }

        if(firstIndex == -1 && lastIndex == -1){
            printf("0\n");
        }else{
            printf("%d\n",lastIndex-firstIndex+1);
        }
        
    }

    return 0;

}