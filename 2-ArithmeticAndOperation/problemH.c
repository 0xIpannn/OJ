#include <stdio.h>

int main() {
    int count = 3;
    double sum[3];
    double a, b, c, d;

    for (int i = 0; i < count; i++)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        sum[i] = 2*a + 2*b + 2*c + d;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.2lf\n", sum[i]);
    }
}