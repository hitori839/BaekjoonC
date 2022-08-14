#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	char h;
	char arr[1001][81] = {1};
	int b[1001] = {0};
	int brr[1001] = {0};
	scanf("%d", &a);
	h = getchar();
	for (int i = 0; i < a; i++) {
		int c = 0;
		while (1) {
			arr[i][c] = getchar();
			if (arr[i][c] == '\n') {
				b[i] = c;
				break;
			}
			else
				c = c + 1;
		}
	}
	int x = 0, y = 0;
	for (int j = 0; j < a; j++) {
		int x = 0, y = 0;
		for (int k = 0; k < b[j]; k++)
		{
			if (arr[j][k] == 'O') {
				y = y + 1;
				x = x + y;
			}
			else {
				y = 0;
			}
		}
		brr[j] = x;
	}
	for (int g = 0; g < a; g++)
		printf("%d\n",brr[g]);
	return 0;
}