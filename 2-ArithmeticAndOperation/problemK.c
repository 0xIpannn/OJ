#include <stdio.h>

int main() {
    int moneyBefore;
    double interest, moneyAfter;

    scanf("%d %lf", &moneyBefore, &interest);

    interest = interest / 100;
    moneyAfter = moneyBefore * (1 + interest) * (1 + interest) * (1 + interest);

    printf("%.2lf\n", moneyAfter);
}