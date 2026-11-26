#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int binarySearch(const int b[], int low, int high, int searchKey);
int main(void)
{
    int a[SIZE] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 };
    int key;
    printf("Enter a search key: ");
    scanf("%d", &key);

    int result = binarySearch(a, 0, SIZE - 1, key);
    if (result != -1) {
        printf("Found %d at subscript %d.\n", key, result);
    }
    else {
        printf("%d not found.\n", key);
    }
    system("pause");
    return 0;
}

int binarySearch(const int b[], int low, int high, int searchKey)
{
    if (low > high) {
        return -1;
    }

    int middle = low + (high - low) / 2;
    if (searchKey == b[middle]) {
        return middle;
    }
    else if (searchKey < b[middle]) {
        return binarySearch(b, low, middle - 1, searchKey);
    }
    else {
        return binarySearch(b, middle + 1, high, searchKey);
    }
}