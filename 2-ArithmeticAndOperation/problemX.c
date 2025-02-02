#include <stdio.h>

int main() {
    double num1, num2, num3, sum;

    scanf("%lf %lf %lf", &num1, &num2, &num3);
    sum = num1 * num2 * num3;

    printf("%.0lf\n", sum);
}