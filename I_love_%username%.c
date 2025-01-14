#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int amazing = 0;
    int arr[n];

    int min, max;
    scanf("%d",&arr[0]);
    min = arr[0];
    max = arr[0];
        
    for(int i=1; i < n; i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;

        if(a > max){
            max = a;
            amazing += 1;
            continue;
        }else if(a < min){
            min = a;
            amazing += 1;
        }
    }

    printf("%d", amazing);

    return 0;

}