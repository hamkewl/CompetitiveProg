/*
	https://atcoder.jp/contests/abc121/submissions/4613215
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TLong long long

typedef struct {
	TLong a;	// price
	TLong b;	// limit
} store;

int comp(const void *p,const void *q){
    return ((store *)p)->a - ((store*)q)->a;
}

int main(int argc, char const *argv[])
{
	TLong n,m;
	TLong t_price = 0;
	TLong temp;
	store st[100000];
	scanf("%lld%lld",&n,&m);
	for (TLong i = 0; i < n; ++i)	scanf(" %lld%lld", &st[i].a, &st[i].b);

	qsort(st,n,sizeof(store),comp);
	for (int i = 0; (i < n && m > 0); ++i)
	{
		temp = (st[i].b <= m) ? st[i].b : m;
		t_price += st[i].a * temp;
		m -= temp;
	}
	printf("%lld\n",t_price);
	return 0;
}
