#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int d;
	cin >> d;
	printf("Christmas");
	for (int i = 0; i < abs(d - 25); ++i)	printf(" Eve");
	printf("\n");
	return 0;
}
