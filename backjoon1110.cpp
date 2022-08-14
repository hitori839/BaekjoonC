#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	scanf("%d", &a);
	b = a;
	c = 0;
	while (true)
	{
		if ((c > 0) && (a == b))
			break;
		else
		{
			d = b / 10;
			e = b % 10;
			if ((d + e) >= 10)
			{
				b = (e * 10) + d + e - 10;
			}
			else
			{
				b = (e * 10) + d + e;
			}
			c = c + 1;
		}
	}
	printf("%d", c);
	return 0;
}