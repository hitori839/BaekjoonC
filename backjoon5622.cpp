#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int a = 0, b, c = 0;
	char arr[16] = {0};
	while (true) {
		arr[c] = getchar();
		if (arr[c] == '\n') {
			break;
		}
		else {
			c = c + 1;
		}
	}
	for (int i = 0; i < c; i++) {
		b = (int)arr[i];
		if ((b > 64) && (b < 68)) {
			a = a + 3;
		}
		else if ((b > 67) && (b < 71)) {
			a = a + 4;
		}
		else if ((b > 70) && (b < 74)) {
			a = a + 5;
		}
		else if ((b > 73) && (b < 77)) {
			a = a + 6;
		}
		else if ((b > 76) && (b < 80)) {
			a = a + 7;
		}
		else if ((b > 79) && (b < 84)) {
			a = a + 8;
		}
		else if ((b > 83) && (b < 87)) {
			a = a + 9;
		}
		else if ((b > 86) && (b < 91)) {
			a = a + 10;
		}
		else {
			a = a + 11;
		}
	}
	printf("%d", a);
}