#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	for (int b = 1; b < 10; b++)
		printf("%d * %d = %d\n", a, b, a * b);
	return 0;
}