#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, m;
	scanf("%d %d %d", &a, &b, &c);
	if((a==b) && (b==c))
		printf("%d", 10000+ a*1000);
	else if(a == b)
		printf("%d", 1000 + a * 100);
	else if (a == c)
		printf("%d", 1000 + a * 100);
	else if (c == b)
		printf("%d", 1000 + b * 100);
	else
	{
		if ((a > b) && (a > c))
			m = a;
		if ((b > a) && (b > c))
			m = b;
		if ((c > a) && (c > b))
			m = c;
		printf("%d", m * 100);
	}
	return 0;
}