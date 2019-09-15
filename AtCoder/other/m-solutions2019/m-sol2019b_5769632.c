/*
	submission #5769632 - User: herp_sy
	https://atcoder.jp/contests/m-solutions2019/submissions/5769632
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
	int i,win  = 0,lose = 0;
	char s[17];
	scanf("%s",s);
	for (i = 0; i < strlen(s); ++i)
	{
		if(s[i] == 'o')	++win;
		else ++lose;
	}
	if(win + (15 - i) >= 8)	puts("YES");
	else puts("NO");
	return 0;
}
