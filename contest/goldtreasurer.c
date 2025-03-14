#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        
        char s[200001];
        scanf("%s", s);
        int len = strlen(s);
        s[len] = '\0';

        long long countMinus = 0;
        long long countUnderScore = 0;
        
        for (int i = 0; i < n; i++) {
            if(s[i] == '-'){
                countMinus++;
            }else if (s[i] == '_'){
                countUnderScore++;
            }
        }

        if (n < 3 || countMinus < 2 || countUnderScore < 1){
            printf("%lln\n",0);
        }
        
        long long minusStart = countMinus / 2;
        long long minusEnd = countMinus - minusStart;
        
        printf("%lld\n",minusStart * countUnderScore * minusEnd);
    }
    
    return 0;
}
