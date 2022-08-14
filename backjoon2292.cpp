#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	long long int a;
	long long int b = 0;
	long long int c = 1;
	scanf("%lld", &a);
	if (a == 1) {
		printf("1");
	}
	else {
		while (true) {
			if (a <= c) {
				printf("%lld", b + 1);
				break;
			}
			else {
				b = b + 1;
				c = c + (6 * b);
			}
		}
	}
}