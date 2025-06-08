#include<stdio.h>

int main(){

	int n, m;
    scanf("%d %d", &n, &m);

    int count = 0;

	for(int a = 0; a*a <= n; a++){
		int b = n- (a*a);
		if((b*b) +a==m && b>=0){
			count += 1;
        }
    }
	
    printf("%d", count);
}