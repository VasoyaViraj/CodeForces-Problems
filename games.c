#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int home[n], other[n];
    int count = 0;

    for(int i = 0; i < n; i++){
        scanf("%d %d", &home[i], &other[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(home[i] ==  other[j]){
                count += 1;
            }
        }
    }

    printf("%d",count);

    return 0;

}