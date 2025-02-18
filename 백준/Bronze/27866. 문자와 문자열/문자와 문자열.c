#include<stdio.h>

int main(void)
{	
	char s[1000]; int n;

	scanf("%s\n%d", &s, &n);
	printf("%c", s[n-1]);

	return 0;
}