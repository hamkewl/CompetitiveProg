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
	int n,*h;
	int cnt = 0,max = 0;
	scanf("%d",&n);
	h = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)	scanf(" %d",&h[i]);
	for (int i = 0; i < n; ++i){
		if(max <= h[i]){
		  ++cnt;
		  max = h[i];
	  }
	}
	printf("%d\n", cnt);
	return 0;
}

