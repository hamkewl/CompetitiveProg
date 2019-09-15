#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
	if(!b)	return a;
	else gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
	long n,*a;
	long min1 = 10000000000,im;
	long min2 = 10000000000;

	scanf("%ld",&n);
	a = (long *)malloc(sizeof(long) * n);
	for (int i = 0; i < n; ++i){
		scanf(" %ld",&a[i]);
		if(a[i] == 1){
			printf("1\n");
			return 0;
		}
		if(a[i] < min1){
			min1 = a[i];
			im = i;
		}
	}
	for (int i = 0; i < n; ++i){
		a[i] = gcd(a[i],min1);
		if(a[i] < min2)	min2 = a[i];
	}
	printf("%ld\n", min2);
	return 0;
}
