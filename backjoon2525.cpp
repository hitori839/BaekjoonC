#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	if (b + c >= 60)
	{
		d = (b + c) / 60;
		e = (b + c) % 60;
		a = a + d;
		b = e;
		if (a > 23)
			a = a - 24;
	}
	else
		b = b + c;
	printf("%d %d", a, b);
	return 0;
}