#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        
        if (n != 5) {
            printf("NO\n");
            continue;
        }

        char str[6];
        scanf("%s", str);

        int tCount = 0, iCount = 0, mCount = 0, uCount = 0, rCount = 0;

        for (int j = 0; j < 5; j++) {
            if (str[j] == 'T') tCount++;
            else if (str[j] == 'i') iCount++;
            else if (str[j] == 'm') mCount++;
            else if (str[j] == 'u') uCount++;
            else if (str[j] == 'r') rCount++;
            else {
                tCount = -1; 
                break;
            }
        }

        if (tCount == 1 && iCount == 1 && mCount == 1 && uCount == 1 && rCount == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
