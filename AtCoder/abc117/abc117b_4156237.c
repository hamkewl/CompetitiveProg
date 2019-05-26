/*
	https://atcoder.jp/contests/abc117/submissions/4156237
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,l[10];
	int sum = 0,max = 0;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf(" %d",&l[i]);
		sum += l[i];
		if(l[i] > max){
			max = l[i];
		}
	}
	if(max < sum - max)	printf("Yes\n");
	else printf("No\n");
	return 0;
}
