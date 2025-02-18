#include<stdio.h>

int main(void)
{	
	int arr[100];
	int n = 0, m = 0, a = 0, b = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i)
		arr[i] = i + 1;

	for (int i = 0; i < m; ++i)
	{
		scanf("%d %d", &a, &b);
		for (; a <= b; ++a)
		{
			int tmp = arr[a - 1];
			arr[a-1] = arr[b-1];
			arr[b - 1] = tmp;
			--b;
		}
	}

	for (int j = 0; j < n; ++j)
		printf("%d ", arr[j]);
	
	return 0;
}