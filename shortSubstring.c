#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char b[101];
        scanf("%s", b);
        int len = strlen(b);

        char a[101];
        int index = 0;

        a[index++] = b[0];

        for (int i = 1; i < len - 1; i += 2) {
            a[index++] = b[i];
        }

        a[index++] = b[len - 1];

        a[index] = '\0';

        printf("%s\n", a);
    }

    return 0;
}
