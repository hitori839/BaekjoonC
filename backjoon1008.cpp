#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b;
	long double c;
	scanf("%lf %lf", &a, &b);
	c = a / b;
	printf("%.32llf", c);

	return 0;
}