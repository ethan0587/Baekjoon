#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];

    scanf("%s", s);
    printf("%zu", strlen(s));

    return 0;
}
