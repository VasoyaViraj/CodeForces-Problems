// incompete

#include<stdio.h>

int main(){

    int year, output;
    scanf("%d",&year);
    int num = year;
    
    while(1){
        int arr[4];
        
        for(int i = 0; i < 4; i++){
            arr[i] = num%10;
            num = num/10;
            if(num == 0){
                break;
            }
        }
        if(arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3] && arr[1] == arr[2] && arr[1] == arr[3] && arr[2] == arr[3]){
            num = num + 1;
        }else{
            output = num;
            break;
        }
    }
    
    printf("%d",output);

    return 0;
}