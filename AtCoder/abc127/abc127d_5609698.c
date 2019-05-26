/*
	https://atcoder.jp/contests/abc127/submissions/5609698
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long

typedef struct{
	TLong b;
	TLong c;
} BC;

int ASC(const int *a,const int *b){
	return (*a - *b);
}

int DESC(const int *p,const int *q){
	return ((BC *)q)->c - ((BC *)p)->c;
}

int main(int argc, char const *argv[])
{
	TLong n,m;
	TLong a[100003];
	BC bc[100003];
	TLong sum = 0;
	TLong cnt = 0,pcnt = 0;

	scanf("%lld%lld",&n,&m);
	for (TLong i = 0; i < n; ++i)	scanf("%lld",&a[i]);
	for (TLong i = 0; i < m; ++i)	scanf("%lld%lld",&bc[i].b, &bc[i].c);
	qsort(a,n,sizeof(TLong),ASC);
	qsort(bc,m,sizeof(BC),DESC);

	for (TLong i = 0; i < n; ++i)
	{
		if(pcnt >= bc[cnt].b){
			++cnt;
			pcnt = 0;
			if(cnt >= m)	break;
		}
		if(a[i] < bc[cnt].c) a[i] = bc[cnt].c;
		else break;
		++pcnt;
	}
	for (TLong i = 0; i < n; ++i)	sum += a[i];
	printf("%lld\n", sum);
	return 0;
}
