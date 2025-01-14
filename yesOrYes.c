#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
    
        char a[4];
        scanf("%s",a);
        strlwr(a);
        if(strcmp(a,"yes") == 0){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }

    }

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;

}