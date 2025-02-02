#include <stdio.h>

int main() {
    const float PI = 3.14;
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        double h = 0, r = 0, area = 0;
        scanf("%lf %lf", &r, &h);

        area = 2 * PI * r * (r + h);
        printf("Case #%d: %.2lf\n", i + 1, area);
    }
}