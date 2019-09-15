// https://atcoder.jp/contests/arc075/submissions/5660923

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int ASC(const int *a,const int *b){
	return (*a - *b);
}

int main(int argc, char const *argv[])
{	
	int n,s[100];
	int max = 0,min = 0x7F,pat,sum = 0;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i){
		scanf(" %d",&s[i]);
		sum += s[i];
	}
	if(sum % 10 != 0){
		printf("%d\n",sum);
		return 0;
	}
	else{
		qsort(s,n,sizeof(int),ASC);
		for (int i = 0; i < n; ++i)
		{
			if(s[i] % 10 != 0){
				sum -= s[i];
				break;
			}
		}
		sum = (sum % 10 == 0) ? 0 : sum;
		printf("%d\n", sum);
	}
}
