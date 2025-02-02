#include <stdio.h>

int main() {
    double discountedPrice, ogPrice, discount;

    scanf("%lf %lf", &ogPrice, &discountedPrice);

    discount = ((ogPrice - discountedPrice) / ogPrice) * 100;

    printf("%.2lf%%\n", discount);
}
