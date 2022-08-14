#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b[1000] = {0};
	int c[1000] = {0};
	int arr[1000] = { 0 };
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &b[i], &c[i]);
		arr[i] = b[i] + c[i];
	}
	for (int j = 0; j < a; j++)
		printf("Case #%d: %d + %d = %d\n", j + 1, b[j], c[j], arr[j]);
	return 0;
}