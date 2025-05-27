#include<stdio.h>

int positive(int num){
    if(num < 0){
        return -1*num;
    }
    return num;
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        int sum = 0;

        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            sum += positive(temp);
        }
        
        printf("%d\n", sum);
    }

    return 0;

}