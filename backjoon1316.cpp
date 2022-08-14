#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char arr[101][101] = {0};
int brr[101] = {0};

int main(void)
{
	int a = 0;
	int b = 0;
	char d;
	scanf("%d", &a);
	d = getchar();
	for (int i = 0; i < a; i++) {
		b = 0;
		while (true) {
			arr[i][b] = getchar();
			if (arr[i][b] == '\n') {
				break;
			}
			else {
				b = b + 1;
			}
		}
		brr[i] = b;
	}
	int x = 1;
	int c = 0;
	for (int i = 0; i < a; i++) {
		x = 1;
		for (int j = 0; j < brr[i] - 2; j++) {
			if (x == 0) {
				break;
			}
			for (int h = j + 2; h < brr[i]; h++) {
				if (x == 0) {
					break;
				}
				if (arr[i][j] == arr[i][h]) {
					for (int k = j + 1; k < h; k++) {
						if (arr[i][j] != arr[i][k]) {
							x = 0;
							break;
						}
					}
				}
			}
		}
		if (x == 0) {
			c = c;
		}
		else {
			c = c + 1;
		}
	}
	printf("%d", c);
}