#include <stdio.h>

int plusPlus(int n){
	if(n == 1)  return 1;
	else return n + plusPlus(n - 1);
}

int main(int argc, char const *argv[])
{
	int N;
	scanf("%d",&N);
	printf("%d\n", plusPlus(N));
	return 0;
}
