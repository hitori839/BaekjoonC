long long sum(int* a, int n)
{
	long long int x = 0;
	for (int i = 0; i < n; i++) {
		x = x + a[i];
	}
	return x;
}