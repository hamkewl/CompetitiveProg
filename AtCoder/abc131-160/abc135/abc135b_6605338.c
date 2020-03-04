/*
	submission #6605338 - User: herp_sy
	https://atcoder.jp/contests/abc135/submissions/6605338
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
	int n,p[53];
	int cnt = 0;
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i){
		scanf("%d",&p[i]);
		if(p[i] != i) ++cnt;
	}
	if(cnt == 1 || cnt >= 3)  puts("NO");
	else puts("YES");
	return 0;
}
