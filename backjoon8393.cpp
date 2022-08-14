#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, sum = 0;
	scanf("%d", &a);
	while (a > 0)
	{
		sum = sum + a;
		a = a - 1;
	}
	printf("%d", sum);
	return 0;
}