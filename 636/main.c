#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char s[]);

int main(void)
{
    char str[] = "Print this backward";

    stringReverse(str);
    printf("\n");

    system("pause");
    return 0;
}

void stringReverse(const char s[])
{
    if (s[0] == '\0') {
        return;
    }

    stringReverse(&s[1]);
    printf("%c", s[0]);
}