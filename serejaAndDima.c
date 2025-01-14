#include<stdio.h>

int main(){

    int sereja =0, dima=0, n;

    scanf("%d",&n);

    int turn = 1; // 0 for sereja and 1 for dima

    int sIndex = 0;
    int eIndex = n-1;

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0; j < n; j++){
        if(turn){
            if(arr[sIndex] > arr[eIndex]){
                sereja += arr[sIndex];
                sIndex++;   
            }else{
                sereja += arr[eIndex];
                eIndex--;
            }
            turn = 0;
        }else{
            if(arr[sIndex] > arr[eIndex]){
                dima += arr[sIndex];
                sIndex++;
            }else{
                dima += arr[eIndex];
                eIndex--;
            }
            turn = 1;
        }
    }

    printf("%d %d",sereja,dima);


            

    



    return 0;

}