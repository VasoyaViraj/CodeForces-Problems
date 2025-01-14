#include<stdio.h>
#include<math.h>

int main(){

    int n = 9876;
    int count = 0;
    int arr[10];

    while(n != 0){
        int power=1;
        for(int i = 0; i < count; i++){
            power = power*10;
        }
        arr[count] = (n%10)*power;
        n = n/10;
        count += 1;
    }

    printf("%d\n",count);
    for(int i = 0; i < count; i++){
        printf("%d ",arr[i]);
    }

    return 0;

}