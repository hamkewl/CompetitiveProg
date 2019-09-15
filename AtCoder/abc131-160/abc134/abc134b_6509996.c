/*
	submission #6509996 - User: herp_sy
	https://atcoder.jp/contests/abc134/submissions/6509996
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
	int n,d;
	scanf("%d%d",&n,&d);
	printf("%d\n", (n + d * 2) / (d * 2 + 1));
	return 0;
}
