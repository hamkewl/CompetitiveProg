/*
	https://atcoder.jp/contests/abc127/submissions/5587112
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a <= 5)	puts("0");
	else if(a <= 12)	printf("%d\n",b / 2);
	else printf("%d\n", b);
	return 0;
}
