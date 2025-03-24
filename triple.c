#include <stdio.h>

int main() {
    int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		int a[200001] = {};
        int e = -1;

        int n;
		scanf("%d", &n);

		for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);

            a[x]++;
            if (a[x] > 2){
                e = x;
            }
		}
		printf("%d\n", e);
	}
}