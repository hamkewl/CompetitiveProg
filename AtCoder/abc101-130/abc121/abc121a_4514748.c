/*
	https://atcoder.jp/contests/abc121/submissions/4514748
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int H,W,a,b;
	scanf("%d%d%d%d",&H,&W,&a,&b);
	printf("%d\n",(H - a) * (W - b));
	return 0;
}
