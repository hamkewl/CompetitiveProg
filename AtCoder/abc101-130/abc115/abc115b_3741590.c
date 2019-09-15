#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N;
	int p[10];
	int sum = 0,max = 0,maxi;

	scanf("%d",&N);
	for (int i = 0; i < N; ++i){
		scanf(" %d", &p[i]);
		if(max < p[i]){
			max = p[i];
			maxi = i;
		}
	}
	p[maxi] /= 2;
	for (int i = 0; i < N; ++i){
		sum += p[i];
	}
	printf("%d\n", sum);
	return 0;
}
