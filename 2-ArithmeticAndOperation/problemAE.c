#include <stdio.h>

int main() {
    int hit;
    long long int totalPoint = 0;
    long long int mainPoint = 0;
    long long int bonusPoint = 0;

    scanf("%d", &hit);

    mainPoint = 100 * hit;
    for (int i = 1; i <= hit; i++) bonusPoint += (i - 1) * 50;
    totalPoint = mainPoint + bonusPoint;

    printf("%lld\n", totalPoint);
}