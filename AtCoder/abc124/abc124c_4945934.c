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
	int cnt = 0;
	char zeroichi[100007];
	scanf("%s",zeroichi);
	for (int i = 1; i < strlen(zeroichi); ++i)
	{
		if(zeroichi[i - 1] == zeroichi[i]){
			switch(zeroichi[i - 1]){
				case '0':
					zeroichi[i] = '1';
					break;
				case '1':
					zeroichi[i] = '0';
					break;
			}
			++cnt;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
