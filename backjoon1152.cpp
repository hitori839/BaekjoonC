#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char arr[1000001] = {0};

int main(void)
{
	int a = 0;
	int b = 0;
	while (true) {
		arr[a] = getchar();
		if (arr[a] == '\n') {
			break;
		}
		else {
			a = a + 1;
		}
	}
	int h = 0;
	while (true) {
		if (arr[h] == '\n') {
			break;
		}
		else if (arr[h] == ' ') {
			h = h + 1;
			continue;
		}
		else {
			while (true) {
				if (arr[h] == '\n') {
					b = b + 1;
					break;
				}
				else if (arr[h] == ' ') {
					h = h + 1;
					b = b + 1;
					break;
				}
				else {
					h = h + 1;
					continue;
				}
			}
		}
	}
	printf("%d", b);
}