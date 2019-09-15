#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TLong long long

TLong n,x;
TLong *a,*p;

TLong burger(TLong n,TLong x){
	if(!n)	return (x <= 0 ? 0 : 1);
	else if(x <= 1 + a[n - 1])	return burger(n - 1,x - 1);
	else return p[n - 1] + 1 + burger(n - 1,x - 2 - a[n - 1]);
}

int main(int argc, char const *argv[])
{	
	scanf("%lld%lld",&n,&x);
	a = (TLong *)malloc(sizeof(TLong) * n);
	p = (TLong *)malloc(sizeof(TLong) * n);
	a[0] = 1;	p[0] = 1;

	for (TLong i = 1; i < n; ++i){
		a[i] = a[i - 1] * 2 + 3;
		p[i] = p[i - 1] * 2 + 1;
	}
	printf("%lld\n", burger(n,x));
	return 0;
}
