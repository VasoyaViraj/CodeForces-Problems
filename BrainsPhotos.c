#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    char pixel;
    int isColor = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &pixel);
            if(pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                isColor = 1;
            }
        }
    }
    
    if(isColor) {
        printf("#Color\n");
    }else{
        printf("#Black&White\n");
    }
    
    return 0;
}
