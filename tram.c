#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[2][n];
    int total[n];   

    for(int i = 0; i < n; i++){
        scanf("%d %d",&arr[0][i],&arr[1][i]);
    }

    for(int j = 0; j < n; j++){
        if(j == 0){
            total[j] = arr[1][j];
        }else{
            total[j] = total[j-1] - arr[0][j] + arr[1][j];
        }
    }

    // for(int i = 0; i < n; i++){
    //     printf("%d\n",total[i]);
    // }   

    int max = total[0];

    for(int i = 0; i < n; i++){
        if(total[i] > max){
            max = total[i];
        }
    }

    printf("%d",max);

    return 0;
}

// #include <stdio.h>

// int main() {
//     int n; // Number of stops
//     scanf("%d", &n);

//     int a, b; // Passengers exiting and entering at each stop
//     int current_passengers = 0; // Passengers in the tram at any given time
//     int max_capacity = 0; // Minimum required tram capacity

//     for (int i = 0; i < n; i++) {
//         scanf("%d %d", &a, &b);
//         current_passengers -= a; // Passengers exit the tram
//         current_passengers += b; // Passengers enter the tram
        
//         if (current_passengers > max_capacity) {
//             max_capacity = current_passengers; // Update max capacity if exceeded
//         }
//     }

//     printf("%d\n", max_capacity); // Output the minimum capacity required
//     return 0;
// }
