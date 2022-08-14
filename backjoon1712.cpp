#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int d;
long long int a, b, c;

int main(void)
{
	scanf("%lld %lld %lld", &a, &b, &c);
	d = c - b;
	if (d <= 0) {
		printf("-1");
	}
	else {
		printf("%lld", (a / d) + 1);
	}
}