#include<stdio.h>

int minimum(int n, int s[]){
	int i, min;
	for(i=min=0; i<n; i++){
		if(s[i] < s[min]){
            min=i;
        }
	}
    return min;
}

int main(){
	int t, n, i, j;
	int a[50], b[50];
	int min1,min2;

	long long k;
	scanf("%d",&t);

	for(i=0;i<t;i++){
		scanf("%d",&n);

		for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
		for(j=0;j<n;j++){
            scanf("%d",&b[j]);
        }

        min1=minimum(n,a);
		min2=minimum(n,b);

		for(j=k=0;j<n;j++){
			k+=(a[j]-a[min1]>b[j]-b[min2])? a[j]-a[min1]:b[j]-b[min2];
		}
		printf("%lld\n",k);
	}
	return 0;
}
