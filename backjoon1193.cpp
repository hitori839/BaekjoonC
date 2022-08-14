#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int a;
long long int b = 1;
long long int c = 1;
long long int d = 0;
long long int e = 0;

int main(void)
{
	scanf("%lld", &a);
	if (a == 1) {
		printf("1/1");
	}
	else {
		while (true) {
			b = b + 1;
			c = c + b;
			if ((c >= a) && ((b % 2) == 0)) {
				c = c - b;
				d = a - c;
				b = b + 1;
				for (int i = 1; i <= d; i++) {
					e = i;
					b = b - 1;
				}
				printf("%lld/%lld", e, b);
				break;
			}
			if ((c >= a) && ((b % 2) == 1)) {
				c = c - b;
				d = a - c;
				b = b + 1;
				for (int i = 1; i <= d; i++) {
					e = i;
					b = b - 1;
				}
				printf("%lld/%lld", b, e);
				break;
			}
		}
	}
}