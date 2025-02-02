#include <stdio.h>

int main() {
    int count;
    double hasil[3];
    double num, percent;

    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%lf %lf", &percent, &num);
        percent = percent / 100;
        hasil[i] = num * percent;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.2lf\n", hasil[i]);
    }
}