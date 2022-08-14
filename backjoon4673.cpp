#include <stdio.h>
void d();
int arr[10001] = {0};

int main(void)
{
	d();
	return 0;
}

void d()
{
	int a, b, c, d, e;
	for (int i = 1; i < 10000; i++) {
		d = i % 10;
		c = ((i - d) % 100) / 10;
		b = ((i - d - c) % 1000) / 100;
		a = ((i - d - c - b) / 1000);
		arr[i + a + b + c + d] = 1;
	}
	for (int i = 1; i < 10000; i++) {
		if (arr[i] == 0)
			printf("%d\n", i);
		else 
			continue;
	}
}	