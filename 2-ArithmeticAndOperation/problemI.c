#include <stdio.h>

int main() {
    int num, timesTwo, minusOne;

    scanf("%d", &num);

    timesTwo = num * 2;
    minusOne = timesTwo - 1;

    printf("%d plus %d is %d\n", num, num, timesTwo);
    printf("minus one is %d\n", minusOne);
}