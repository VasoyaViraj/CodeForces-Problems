// #include<stdio.h>

// int main(){

//     int t;
//     scanf("%d",&t);

//     for(int i = 0; i < t; i++){

//         int n, m;
//         scanf("%d %d", &n, &m);

//         int arrayA[n],arrayB;

//         for(int j = 0; j < n; j++){
//             scanf("%d", &arrayA[j]);
//         }

//         scanf("%d", &arrayB);

//         int isSorted = 1;

//         int temp = arrayB - arrayA[0];

//         for(int j = 1; j < n; j++){
//             int tempp = arrayB - arrayA[j];
//             if(tempp < temp){
//                 isSorted = 0;
//                 break;
//             }
//             temp = tempp;
//         }

//         if(isSorted==1){
//             printf("YES\n");
//         }else{
//             printf("NO\n");
//         }

//     }

//     return 0;

// }

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases
    
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);  // Read n and m, where m=1
        int a[n], b[m];
        
        // Read array a
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        // Read array b
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }
        
        // Since m = 1, b[0] is the only element
        int b1 = b[0];
        
        // Try to sort array a using the operation
        int possible = 1;
        int last_value = -1;  // Tracks the last valid value for non-decreasing sequence
        
        for (int i = 0; i < n; i++) {
            int current_value = a[i];
            int transformed_value = b1 - a[i];
            
            // Ensure the chosen value is greater than or equal to last_value
            if (current_value >= last_value && transformed_value >= last_value) {
                // If both current_value and transformed_value are valid, choose the smaller one
                last_value = (current_value < transformed_value) ? current_value : transformed_value;
            } else if (current_value >= last_value) {
                // If only current_value is valid, choose it
                last_value = current_value;
            } else if (transformed_value >= last_value) {
                // If only transformed_value is valid, choose it
                last_value = transformed_value;
            } else {
                // If neither is valid, we cannot sort the array
                possible = 0;
                break;
            }
        }
        
        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
