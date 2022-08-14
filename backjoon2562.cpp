#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10];
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	int k = 1, g = arr[0];
	for (int j = 0; j < 9; j++)
	{
		if (g < arr[j])
		{
			g = arr[j];
			k = j + 1;
		}
		else
			continue;
	}
	printf("%d\n%d", g, k);
}