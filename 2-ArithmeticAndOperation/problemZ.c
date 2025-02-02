#include <stdio.h>

int main() {
    int count;
    float sum[3];
    float a, b, c, d;

    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%f %f %f %f", &a, &b, &c, &d);
        sum[i] = 2*(a + b + 2*(c/3) + d/4);
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.2f\n", sum[i]);
    }
}