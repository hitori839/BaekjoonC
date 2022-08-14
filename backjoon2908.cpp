#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int a1, a2, a3;
	int b1, b2, b3;
	int c, d;
	scanf("%d %d", &a, &b);
	a3 = a % 10;
	a2 = ((a % 100) - a3) / 10;
	a1 = (a - (a2 * 10) - a3) / 100;
	c = (a3 * 100) + (a2 * 10) + a1;
	b3 = b % 10;
	b2 = ((b % 100) - b3) / 10;
	b1 = (b - (b2 * 10) - b3) / 100;
	d = (b3 * 100) + (b2 * 10) + b1;
	if (c > d) 
		printf("%d", c);
	else 
		printf("%d", d);
}