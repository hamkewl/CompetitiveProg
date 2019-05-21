#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
	int n,k;
	char s[57];
	scanf("%d%d",&n,&k);
	scanf(" %s",s);
	s[k - 1] += 0x20;
	puts(s);
	return 0;
}
