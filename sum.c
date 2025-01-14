#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i =0; i < n; i++){
        int a, b, c;
        scanf("%d %d %d",&a,&b, &c);
        if(a == b+c || b == a+c || c== a+b){
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