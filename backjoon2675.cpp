#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char arr[1001][21] = {0};
int brr[1001] = {0};
int crr[1001] = {0};

int main(void)
{
	int a;
	int c;
	char no;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &brr[i]);
		no = getchar();
		c = 0;
		while (1) {
			arr[i][c] = getchar();
			if (arr[i][c] == '\n') {
				break;
			}
			else {
				c = c + 1;
			}
		}
		crr[i] = c;
	}
	for (int k = 0; k < a; k++) {
		for (int s = 0; s < crr[k]; s++) {
			for (int h = 0; h < brr[k]; h++) {
				printf("%c", arr[k][s]);
			}
		}
		printf("\n");
	}
	return 0;
}