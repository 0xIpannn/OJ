#include <stdio.h>

int main() {
    int hit;
    long long int totalDmg = 0;
    long long int baseDmg = 0;
    long long int bonusDmg = 0;

    scanf("%d", &hit);

    baseDmg = 100 * hit;
    for (int i = 1; i <= hit; i++) bonusDmg += (i - 1) * 50;
    totalDmg = baseDmg + bonusDmg;

    printf("%lld\n", totalDmg);
}