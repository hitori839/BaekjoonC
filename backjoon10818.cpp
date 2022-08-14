#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[1000001];

int main(void)
{
	int N, s, c;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	s = arr[0];
	c = arr[0];
	for (int j = 0; j < N; j++)
	{
		if (s > arr[j])
			s = arr[j];
	}
	for (int j = 0; j < N; j++)
	{
		if (c < arr[j])
			c = arr[j];
	}
	printf("%d %d", s, c);
	return 0;
}