#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, a, b, c, d, thrown = 0;
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

        for (int j = 1; j <= n; j++) {
            if (j % a == 0 || j % b == 0 || j % c == 0 || j % d == 0) thrown++;
        }

        printf("Case #%d: %d\n", i + 1, thrown);
    }
}