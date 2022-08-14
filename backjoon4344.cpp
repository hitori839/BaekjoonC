#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[1001][1001] = {0};

int main(void)
{
	int a;
	int b;
	char n;
	int brr[1001] = {0};
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		brr[i] = b;
		for (int f = 0; f < b; f++) {
			scanf("%d", &arr[i][f]);
		}
	}
	double x;
	double y;
	int crr[1001] = { 0 };
	for (int k = 0; k < a; k++) {
		x = 0;
		for (int g = 0; g < brr[k]; g++)
			x = x + (double)arr[k][g];
		y = x / (double)brr[k];
		for (int t = 0; t < brr[k]; t++) {
			if ((double)arr[k][t] > y)
				crr[k] = crr[k] + 1;
		}
	}
	for (int h = 0; h < a; h++)
		printf("%.3lf%\n", ((double)crr[h] / (double)brr[h]) * 100.0);
}