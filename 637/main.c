#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int recursiveMaximum(const int b[], int size);

int main(void)
{
    int a[SIZE] = { 23, 89, 12, 67, 94, 5, 78, 34, 61, 49 };

    printf("Maximum value is %d\n", recursiveMaximum(a, SIZE));

    system("pause");
    return 0;
}

int recursiveMaximum(const int b[], int size)
{
    if (size == 1) {
        return b[0];
    }

    int maxOfRest = recursiveMaximum(b, size - 1);
    return (b[size - 1] > maxOfRest) ? b[size - 1] : maxOfRest;
}