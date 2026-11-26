#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROLLS 36000

int main(void)
{
    int freq[13] = { 0 }; 
    srand((unsigned int)time(NULL));

    for (int i = 0; i < ROLLS; i++) {
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int sum = die1 + die2;
        freq[sum]++;
    }

    printf("%s%12s%14s\n", "Sum", "Count", "Expected");
    for (int sum = 2; sum <= 12; sum++) {
        int ways = (sum <= 7) ? (sum - 1) : (13 - sum);
        double expected = ROLLS * ways / 36.0;
        printf("%3d%12d%14.1f\n", sum, freq[sum], expected);
    }

    system("pause");
    return 0;
}