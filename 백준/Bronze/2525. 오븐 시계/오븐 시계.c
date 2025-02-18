#include<stdio.h>
int main(void)
{
	int h, m, c;

	scanf("%d %d\n%d", &h, &m, &c);

	h = h + (m + c) / 60;
	m = (m + c) % 60;

	if (h >= 24)
		printf("%d %d", h % 24, m);
	else
		printf("%d %d", h, m);

	return 0;
}