#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	while (a > 0)
	{
		printf("%d\n", a);
		a = a - 1;
	}
	return 0;
}