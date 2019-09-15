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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	for (int temp = a; temp <= a * b; temp += a)
	{
		if(temp % b == c){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
