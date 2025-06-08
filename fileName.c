#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    char str[101];
    scanf("%s", str);

    int count = 0;
    for(int i = 0; i < n-2; i++){
        if (str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x'){
            count += 1;
        }
    }

    printf("%d\n", count);

    return 0;
}