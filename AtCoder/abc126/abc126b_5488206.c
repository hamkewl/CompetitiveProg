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
	int s;
	int l,r;
	scanf("%d",&s);
	l = s / 100;	r = s % 100;
	if(1 <= l && l <= 12){
		if(1 <= r && r <= 12)	puts("AMBIGUOUS");
		else puts("MMYY");
	}
	else{
		if(1 <= r && r <= 12)	puts("YYMM");
		else puts("NA");
	}
	return 0;
}
