#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a,b,c;
	int arr[1000] = {0};
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &b, &c);
		arr[i] = b + c;
	}
	for (int j = 0; j < a; j++)
		printf("Case #%d: %d\n", j+1, arr[j]);
	return 0;
}