#include <stdio.h>
 
int main() {

	int t;
	scanf("%d", &t);

	while (t--) {

		int w, h, n;
		scanf("%d %d %d", &w, &h, &n);

		int m = 1;
		while (w % 2 == 0){
			m *= 2;
            w /= 2;
        }
		while (h % 2 == 0){
			m *= 2;
            h /= 2;
        }
		printf(m >= n ? "YES\n" : "NO\n");
	}
	return 0;
}