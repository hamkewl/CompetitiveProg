#include <stdio.h>

int main(int argc, char const *argv[])
{
	int day;
	scanf("%d",&day);
	printf("Christmas");
	if(day == 24)	printf(" Eve\n");
	else if(day == 23)	printf(" Eve Eve\n");
	else if(day == 22)	printf(" Eve Eve Eve\n");
	return 0;
}
