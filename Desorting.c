// #include<stdio.h>

// int isSorted(int arr[], int n){
//     int isSorted = 1;
//     for(int i = 0; i < n-1; i++){
//         if(arr[i] > arr[i+1]){
//             isSorted = 0;
//             break;
//         }
//     }
//     return isSorted;
// }

// void bubbleSort(int *arr, int n) {
//     int i, j;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (*(arr + j) > *(arr + j + 1)) {
//                 int temp = *(arr + j);
//                 *(arr + j) = *(arr + j + 1);
//                 *(arr + j + 1) = temp;
//             }
//         }
//     }
// }

// int main(){

//     int t;
//     scanf("%d",&t);

//     while(t--){

//         int n;
//         scanf("%d",&n);
        
//         int myArr[n];
//         for(int i = 0; i < n; i++){
//             scanf("%d", &myArr[i]);
//         }
        
//         if(isSorted == 0){
//             bubbleSort(myArr, n);

//             int minDiff = myArr[1]-myArr[0];
//             for(int i = 1; i < n-1; i++){
//                 if(minDiff > (myArr[i+1]-myArr[i])){
//                     minDiff = myArr[i+1]-myArr[i];
//                 }
//             }

//             printf("%d\n", (minDiff/2)+1);

//         }else{
//             int minDiff = myArr[1]-myArr[0];
//             for(int i = 1; i < n-1; i++){
//                 if(minDiff > (myArr[i+1]-myArr[i])){
//                     minDiff = myArr[i+1]-myArr[i];
//                 }
//             }
//             if(minDiff == 0){
//                 printf("1\n");
//             }else{
//                 printf("0\n");
//             }
//         }
        
//     }

//     return 0;

// }