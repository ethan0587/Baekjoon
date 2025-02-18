#include<stdio.h>
#include <string.h>

int main(void)
{
	int cnt = 0; char str[1000000];

	gets(str);
	int len = strlen(str);
	for (int i=0; i < len; ++i)
	{
		if (str[i] == ' ')
			cnt++;
	}

	if (str[0] == ' ' && str[len - 1] != ' ')
		printf("%d", cnt);
	else if (str[0] == ' ' && str[len - 1] == ' ')
		printf("%d", cnt - 1);
	else if (str[0] != ' ' && str[len - 1] != ' ')
		printf("%d", cnt + 1);
	else
		printf("%d", cnt);

	return 0;
}