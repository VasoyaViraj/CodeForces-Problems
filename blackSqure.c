#include <stdio.h>

int main() {
    int a[4];

    for(int i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }

    char str[100001];
    scanf("%s",str);

    int output = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - '1';
        output += a[index];
    }

    printf("%d\n", output);

    return 0;
}
