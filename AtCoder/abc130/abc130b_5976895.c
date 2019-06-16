/*
	submission #5976895 - User: herp_sy
	https://atcoder.jp/contests/abc130//submissions/5976895
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
	int n,x,l[103];
	int d[103];
	int cnt = 0;
	scanf("%d%d",&n,&x);
	d[1] = 0;
	for (int i = 1; i <= n + 1; ++i)	scanf("%d",&l[i]);
	for (int i = 1; i <= n + 1; ++i)
	{
		if(i >= 2)	d[i] = d[i - 1] + l[i - 1];
		if(d[i] <= x)	++cnt;
		// printf("%d ", d[i]);
	}
	printf("%d\n",cnt);
	return 0;
}
