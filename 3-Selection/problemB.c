#include <stdio.h>

int main() {
    int count, sum, x, y, z;

    scanf("%d", &count); getchar();

    for (int i = 0; i < count; i++) {
        scanf("%d %d %d", &x, &y, &z); getchar();

        if (x <= (y + z)) {
            printf("Case #%d: yes\n", i + 1);
        } else {
            printf("Case #%d: no\n", i + 1);
        }
    }
}