#include <stdio.h>

int main() {
    int count, a, b;

    scanf("%d", &count); getchar();

    for (int i = 0; i < count; i++) {
        scanf("%d %d", &a, &b); getchar();

        if (a > b) {
            printf("Case #%d: Go-Jo\n", i + 1);
        } else {
            printf("Case #%d: Bi-Pay\n", i + 1);
        }
    }
}