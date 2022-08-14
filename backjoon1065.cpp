#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int okey(int b);

int main(void)
{
	int a, c;
	scanf("%d", &c);
	a = okey(c);
	printf("%d", a);
}

int okey(int b)
{
	int dd;
	if (b < 100) {
		dd = b;
		return dd;
	}
	else {
		dd = 99;
		int x, y, z;
		for (int i = 100; i <= b; i++) {
			z = i % 10;
			y = ((i - z) % 100) / 10;
			x = (i - z - y) / 100;
			if ((x - y) == (y - z)) {
				dd = dd + 1;
			}
			else {
				continue;
			}
		}
		return dd;
	}
}