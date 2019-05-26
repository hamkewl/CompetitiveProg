/*
	https://atcoder.jp/contests/abc106/submissions/5628386
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
	char s[103];
	TLong k;
	scanf("%s",s);
	scanf("%lld",&k);
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i] != '1'){
			printf("%c\n", s[i]);
			return 0;
		}
		else if(i == k - 1){
		  puts("1");
		  return 0;
		}
	}
	puts("1");
	return 0;
}
