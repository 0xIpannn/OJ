#include <stdio.h>

int main() {
    int count;
    double celsius, reaumur[3], fahrenheit[3], kelvin[3];

    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%lf", &celsius);

        reaumur[i] = 0.8 * celsius;
        fahrenheit[i] = 1.8 * celsius + 32;
        kelvin[i] = celsius + 273;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.2lf %.2lf %.2lf\n", reaumur[i], fahrenheit[i], kelvin[i]);
    }
}
