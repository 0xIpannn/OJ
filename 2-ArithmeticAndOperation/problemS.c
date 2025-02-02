#include <stdio.h>
#include <math.h>

int main() {
    double length, height, width, area;

    scanf("%lf %lf %lf", &length, &width, &height);

    area = 3 * (length * width) + (height * width);

    printf("%.3lf\n", area);
}