#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int arr[10] = {0};
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	d = a * b * c;
	while (true)
	{
		if (d == 0)
		{
			break;
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				if ((d % 10) == i)
				{
					arr[i] = arr[i] + 1;
					d = (d - i) / 10;
				}
				else
				{
					continue;
				}
			}
		}
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", arr[j]);
	}
	return 0;
}