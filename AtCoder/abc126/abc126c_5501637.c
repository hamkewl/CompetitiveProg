/*
	https://atcoder.jp/contests/abc126/submissions/5467131
*?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
	double n,k;
	double sumRate = 0.00;
	double tempRate;

	scanf("%lf %lf",&n,&k);
	for (double i = 1.00; i <= n; i += 1.00)
	{
		if(i < k)	tempRate = pow(0.50, ceil(log2(k / i))) / n;
		else tempRate = 1.00 / n;
		sumRate += tempRate;
	}
	printf("%.12f\n", sumRate);
	return 0;
}
