#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007
#define MAXP 0x0FFFFFFF

typedef struct{
	TLong x;
	TLong y;
} point;

int MHD(point p1,point p2){
	return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

int main(int argc, char const *argv[])
{
	int n,m;
	int pNum;
	TLong min;
	point std[53],cp[53];
	scanf("%d%d",&n,&m);
	for (int i = 0; i < n; ++i)	scanf("%lld%lld", &std[i].x, &std[i].y);
	for (int i = 0; i < m; ++i)	scanf("%lld%lld", &cp[i].x, &cp[i].y);
	for (int i = 0; i < n; ++i)
	{
		min = MAXP;
		pNum = 0;
		for (int j = 0; j < m; ++j)
		{
			if(MHD(std[i],cp[j]) < min){
				min = MHD(std[i],cp[j]);
				pNum = j;
			}
		}
		printf("%d\n",pNum + 1);
	}
	return 0;
}
