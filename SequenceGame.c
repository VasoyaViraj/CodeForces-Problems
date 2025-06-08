// #include<stdio.h>

// int main(){

//     int t;
//     scanf("%d",&t);

//     while(t--){
//         int n;
//         scanf("%d",&n);
        
//         long long temp;
//         scanf("%lld", &temp);
//         printf("%lld ", temp);

//         for(int i = 1; i < n; i++){
//             long long tmp;
//             scanf("%lld", &tmp);
//             if(tmp >= temp){
//                 printf("%lld ", tmp);
//             }else{
//                 printf("%lld %lld ", tmp, tmp);
//             }
//             temp = tmp;
//         }
//         printf("\n");
//     }

//     return 0;

// }

#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        long long arr[n];
        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }

        long long myArr[2*n];
        int index = 1;
        myArr[0] = arr[0];
        
        for(int i = 1; i < n; i++){
            if(arr[i] >= arr[i-1]){
                myArr[index] = arr[i];
                index += 1;
            }else{
                myArr[index] = arr[i];
                index += 1;
                myArr[index] = arr[i];
                index += 1;
            }
        }

        printf("%d\n", index);
        for(int i = 0; i < index; i++){
            printf("%lld ", myArr[i]);
        }
        printf("\n");
    }

    return 0;

}