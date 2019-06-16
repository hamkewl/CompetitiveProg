/*
	submission #5975928 - User: herp_sy
	https://atcoder.jp/contests/abc130/submissions/5975928
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
	double w,h,x,y;
	scanf("%lf %lf %lf %lf",&w,&h,&x,&y);
	printf("%.12f ", (w * h / 2.00));
	if(w / 2.00 == x && h / 2.00 == y)	printf("1\n");
	else	printf("0\n");
}
