#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b = 1;
	scanf("%d", &a);
	while (a >= b)
	{
		printf("%d\n", b);
		b = b + 1;
	}
	return 0;
}