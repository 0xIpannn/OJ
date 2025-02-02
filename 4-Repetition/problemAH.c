#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        unsigned long long int n;
        scanf("%llu", &n);

        printf("Case #%d: %d\n", i + 1, (1 + (int)log10(n)));
    }
}