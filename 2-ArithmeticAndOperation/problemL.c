#include <stdio.h>

int main() {
    unsigned int money, cardPrice, amount;

    scanf("%u %u", &money, &cardPrice);

    amount = money / cardPrice;

    printf("%u\n", amount);
}