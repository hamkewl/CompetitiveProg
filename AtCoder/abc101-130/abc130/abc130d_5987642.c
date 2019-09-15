/*
	submission #5987642 - User: herp_sy
	https://atcoder.jp/contests/abc130/submissions/5987642
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
	TLong n,k,a[100003];
	TLong sum = 0,cnt = 0;
	TLong r = 0;

	scanf("%lld%lld",&n,&k);
	for (TLong i = 0; i < n; ++i)	scanf("%lld",&a[i]);
	for (TLong l = 0; l < n; ++l)
	{
		while(sum < k){
			if(r == n)	break;
			else{
				sum += a[r];
				++r;
			}
		}
		if(sum < k)	break;
		cnt += (n - r + 1);
		sum -= a[l];
	}
	printf("%lld\n", cnt);
	return 0;
}
