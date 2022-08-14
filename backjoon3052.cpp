#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[11] = {0};
	int brr[43] = {0};
	int h = 0;
	int g = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		h = arr[i] % 42;
		brr[h] = 1;
	}
	for (int K = 0; K < 42; K++) {
		if (brr[K] == 1)
			g = g + 1;
	}
	printf("%d", g);
}