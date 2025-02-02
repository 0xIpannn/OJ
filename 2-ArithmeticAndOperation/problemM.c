#include <stdio.h>

int main() {
    double cardOwned, cardTotal, percentage;

    scanf("%lf %lf", &cardOwned, &cardTotal);

    percentage =  (cardOwned / cardTotal) * 100;

    printf("%.2lf%%\n", percentage);
}