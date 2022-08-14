#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d", &a, &b);
	c = b % 10;
	d = (b % 100) - c;
	e = (b - d) - c;

	printf("%d\n", a * c);
	printf("%d\n", (a * d) / 10);
	printf("%d\n", (a * e) / 100);
	printf("%d", a * b);

	return 0;
}