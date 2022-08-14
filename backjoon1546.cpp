#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[1001] = {0};
	int a;
	int c = arr[0];
	long double b = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		scanf("%d", &arr[i]);
	for (int j = 0; j < a; j++) {
		if (c < arr[j])
			c = arr[j];
	}
	for (int k = 0; k < a; k++) {
		b = b + ((double)arr[k]/(double)c) * 100.0;
	}
	printf("%.14llf", b / (double)a );
}