/*
	https://atcoder.jp/contests/abc127/submissions/5591691
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int r,d,x[13];
	scanf("%d%d%d",&r,&d,&x[0]);
	for (int i = 1; i <= 10; ++i)
	{
		x[i] = r * x[i - 1] - d;
		printf("%d\n", x[i]);
	}
	return 0;
}
