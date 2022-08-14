#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char arr[102] = {0};

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (true) {
		arr[a] = getchar();
		if (arr[a] == '\n') {
			break;
		}
		else {
			a = a + 1;
		}
	}
	while (true) {
		if ((b > a) || (b == a)) {
			break;
		}
		else {
			if ((arr[b] == 'c') && ((arr[b + 1] == '=') || (arr[b + 1] == '-'))) {
				b = b + 2;
				c = c + 1;
				continue;
			}
			else if (((arr[b] == 'l') || (arr[b] == 'n')) && (arr[b + 1] == 'j')) {
				b = b + 2;
				c = c + 1;
				continue;
			}
			else if (((arr[b] == 's') || (arr[b] == 'z')) && (arr[b + 1] == '=')) {
				b = b + 2;
				c = c + 1;
				continue;
			}
			else if ((arr[b] == 'd') && (arr[b + 1] == '-')) {
				b = b + 2;
				c = c + 1;
				continue;
			}
			else if ((arr[b] == 'd') && (arr[b + 1] == 'z') && (arr[b + 2] == '=')) {
				b = b + 3;
				c = c + 1;
				continue;
			}
			else {
				b = b + 1;
				c = c + 1;
				continue;
			}
		}
	}
	printf("%d", c);
}