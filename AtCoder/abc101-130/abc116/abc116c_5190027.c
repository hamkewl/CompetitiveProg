/*
	https://atcoder.jp/contests/abc116/submissions/5190027
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007
#define MINP 0x00FF

int main(int argc, char const *argv[])
{
	int n,h[107];
	int l = 0,r;
	int cnt = 0,min = MINP,flag = 1;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)	scanf("%d",&h[i]);
	while(l < n){
		min = MINP;
		flag = 1;
		if(h[l] == 0){
			++l;
			continue;
		}
		for (int i = l; (i < n && flag); ++i)
		{
			for (r = l; r < n; ++r)
			{
				if(h[r] == 0){
					flag = 0;
					break;
				}
			}
		}
		for (int i = l; i < r; ++i)
		{
			if(min > h[i])	min = h[i];
		}
		for (int i = l; i < r; ++i)	h[i] -= min;
		cnt += min;
	}
	printf("%d\n", cnt);
}
