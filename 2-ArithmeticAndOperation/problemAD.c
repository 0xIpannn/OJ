#include <stdio.h>

int main() {
    int physicalDmg, magicalDmg, pureDmg;
    float totalDmg;

    scanf("%d %d %d", &physicalDmg, &magicalDmg, &pureDmg);

    totalDmg = 0.2*physicalDmg + 0.3*magicalDmg + 0.5*pureDmg;

    printf("%.2f\n", totalDmg);
}