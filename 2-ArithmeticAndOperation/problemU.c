#include <stdio.h>

int main() {
    int count;
    unsigned long long int detik;
    double rotasi[3];
    double derajat;

    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%lf %lu", &derajat, &detik);

        rotasi[i] = (derajat * detik) / 360.00;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.2lf\n", rotasi[i]);
    }
}