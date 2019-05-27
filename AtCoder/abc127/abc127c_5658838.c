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
	int n,m;
	int l[100007],r[100007];
	int lmax,rmin;
	scanf("%d%d",&n,&m);

	for(int i = 0; i < m; i++)	scanf("%d%d",&l[i],&r[i]);
	lmax = l[0];
	for(int i = 0; i < m; i++){
		if(l[i] > lmax)	lmax = l[i];
	}
	rmin = r[0];
	for(int i = 0; i < m; i++){
		if(rmin > r[i])	rmin = r[i];
	}	
	if(rmin - lmax >= 0)	printf("%d\n",rmin - lmax + 1);
	else	printf("0\n");
	return 0;
}
