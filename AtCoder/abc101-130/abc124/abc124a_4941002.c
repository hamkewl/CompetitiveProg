/*
	https://atcoder.jp/contests/abc124/submissions/4941002
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
	int a,b;
	int ans = 0;
	scanf("%d%d",&a,&b);
	for (int i = 0; i < 2; ++i)
	{
		if(a <= b){
			ans += b;
			--b;
		}
		else{
			ans += a;
			--a;
		}
	}
	printf("%d\n", ans);
	return 0;
}
