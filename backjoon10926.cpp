#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
	char arr[51] = {0};
	char ch;
	int ah;
	for (int a = 0; a < 51; a++)
	{
		ch = getchar();
		arr[a] = ch;
		if (ch == '\n')
		{
			ah = a;
			break;
		}
	}
	for (int b = 0; b < ah; b++)
	{
		printf("%c",arr[b]);
	}
	printf("??!");
	return 0;
}