#include<stdio.h>
#include <string.h>

int main(void)
{	
	int n; char str[100] = { 0 }; int loc;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	scanf("%s", str);

	for (int i = 0; i < 26 ; ++i) {
		for (int j=0; j < strlen(str); ++j)
		{
			if (alphabet[i] == str[j]) {
				loc = j;
				break;
			}
			else {
				loc = -1;
			}
		}

		printf("%d ", loc);

	}
	
	return 0;
}
