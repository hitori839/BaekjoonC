#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10001] = {-1};
	int brr[10001] = {-1};
	int a = 0;
	while (1)
	{
		scanf("%d %d", &arr[a], &brr[a]);
		if (arr[a] == 0)
			break;
		a = a + 1;
	}
	for (int i = 0; i < a; i++)
		printf("%d\n", arr[i] + brr[i]);
	return 0;
}