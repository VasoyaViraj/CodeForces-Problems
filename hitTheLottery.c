#include<stdio.h>

int main(){

    long long n;
    scanf("%lld",&n);

    int arr[5];

    arr[0] = n/100;

    arr[1] = (n%100)/20;

    arr[2] = (n%20)/10;
    arr[3] = (n%10)/5;
    arr[4] = (n%5);

    printf("%d",arr[0]+arr[1]+arr[2]+arr[3]+arr[4]);

    return 0;

}