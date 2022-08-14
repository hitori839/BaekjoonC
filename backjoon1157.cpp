#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char arr[1000001] = {0};
int crr[1000001] = {0};
int brr[26] = {0};

int main(void)
{
	int c = 0;
	while (1) {
		arr[c] = getchar();
		if (arr[c] == '\n') {
			break;
		}
		else {
			c = c + 1;
		}
	}
	for (int i = 0; i < c; i++) {
		crr[i] = (int)arr[i] - 97;
		if (crr[i] < 0) {
			crr[i] = crr[i] + 32;
		}
		brr[crr[i]] = brr[crr[i]] + 1;
	}
	int k, s = 0, h;
	k = brr[0];
	h = 0;
	for (int j = 1; j < 26; j++) {
		if (k == brr[j]) {
			s = 1;
			h = 0;
		}
		if (k < brr[j]) {
			k = brr[j];
			s = 0;
			h = j;
		}
		if (k > brr[j]) {
			continue;
		}
	}
	int fuc = 0;
	fuc = h + 65;
	char shib;
	shib = (char)fuc;

	if (s == 1) {
		printf("?");
		return 0;
	}
	else {
		printf("%c", shib);
	}
}