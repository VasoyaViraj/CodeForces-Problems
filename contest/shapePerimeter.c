#include<stdio.h>

int main(){

    int testCases;
    scanf("%d", &testCases);
    int output[testCases];

    for(int i = 0; i < testCases; i++){
        
        int shifts, side;
        scanf("%d %d", &shifts, &side);
        int ans = side * shifts * 4;
        
        for(int j = 0; j < shifts; j++){
            int x, y;
            scanf("%d %d", &x, &y);
            if(j == 0){
                continue;
            }
            ans = ans - 2*((side*2) - x - y); 
        }

        output[i] = ans;
    }

    for(int i = 0; i < testCases; i++){
        printf("%d\n",output[i]);
    }

    return 0;

}