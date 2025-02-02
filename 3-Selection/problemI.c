#include <stdio.h>

int main() {
    int t, a, b, c;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &a, &b, &c);

        printf("Case #%d: %d\n", i + 1, ((a*b/100) > c ? c : (a*b/100)));
    }
}