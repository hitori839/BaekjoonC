#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, sum = 0;
	char ar, br;
	int brr[101] = {0};
	scanf("%d", &a);
	br = getchar();
	for (int i = 0; i < a; i++) {
		ar = getchar();
		brr[i] = (int)ar - 48;
	}
	for (int k = 0; k < a; k++) {
		sum = sum + brr[k];
	}
	printf("%d", sum);
}