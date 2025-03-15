#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int maxOfTwo(int *a, int *b){
    if(*a > *b){
        return *a;
    }else{
        return *b;
    }
}

int main() {

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){

        int listt[4];
        for(int j = 0; j < 4; j++){
            scanf("%d",&listt[j]);
        }
    
        int qal1 = maxOfTwo(&listt[0], &listt[1]);
        int qal2 = maxOfTwo(&listt[2], &listt[3]);

        bubbleSort(listt, 4);

        if((qal1 == listt[2] && qal2 == listt[3]) || (qal1 == listt[3] && qal2 == listt[2])){
            printf("%s\n","YES");
        }else{
            printf("%s\n","NO");
        }

    }

    return 0;
}
