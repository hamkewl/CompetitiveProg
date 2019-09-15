/*
	https://atcoder.jp/contests/abc121/submissions/4518443
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int n,m,c;
	int ans,type = 0;
	int B[20];
	int A[20][20];
	scanf("%d%d%d",&n,&m,&c);
	for (int i = 0; i < m; ++i)	scanf(" %d",&B[i]);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf(" %d",&A[i][j]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		ans = 0;
		for (int j = 0; j < m; ++j)
		{
			ans += B[j] * A[i][j];
		}
		if(ans + c > 0)	++type;
	}
	printf("%d\n", type);
	return 0;
}
