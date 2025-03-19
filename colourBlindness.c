#include<stdio.h>
#include<string.h>

int main(){

    // int t;
    // scanf("%d",&t);

    // for(int i = 0; i < t; i++){
        
        int n;
        scanf("%d",&n);

        char str1[n+1];
        char str2[n+1];
        scanf("%s",str1);
        scanf("%s",str2);

        // for(int j = 0; j < n; j++){
        //     if(str1[j] == 'G'){
        //         str1[j] == 'B';
        //     }
        // }
        // for(int j = 0; j < n; j++){
        //     if(str2[j] == 'G'){
        //         str2[j] == 'B';
        //     }
        // }
        int a = strcmp(str1,str2);
        printf("%d",a);


    // }

    return 0;

}