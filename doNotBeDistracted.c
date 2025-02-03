#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        char tasks[n+1];
        scanf("%s", tasks);
        
        int completed[26] = {0};
        
        char prev = '\0';
        int flag = 0;
        
        for (int i = 0; i < n; i++) {
            if (tasks[i] != prev) {
                if (completed[tasks[i] - 'A'] == 1) {
                    flag = 1;
                    break;
                }
                prev = tasks[i];
                completed[prev - 'A'] = 1;
            }
        }
        
        if (flag) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    
    return 0;
}
