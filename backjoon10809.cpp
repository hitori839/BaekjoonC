#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr;
	int b;
	int brr[26];
	int a = 0;
	for (int j = 0; j < 26; j++)
		brr[j] = -1;
	while (1) {
		arr = getchar();
		if (arr == '\n') {
			break;
		}
		else {
			b = (int)arr - 97;
			if (brr[b] != -1) {
				a = a + 1;
				continue;
			}
			else {
				brr[b] = a;
				a = a + 1;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", brr[i]);
	}
	return 0;
}