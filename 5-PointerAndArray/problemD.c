#include <stdio.h>

int main() {
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    int garden[x][y];

    for (int row = 0; row < x; row++) {
        for (int col = 0; col < y; col++) {
            scanf("%d", &garden[row][col]);
        }
    }

    int t = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a = 0, b = 0, c = 0;
        scanf("%d %d %d", &a, &b, &c);
        garden[a - 1][b - 1] = c;
    }

    for (int row = 0; row < x; row++) {
        for (int col = 0; col < y - 1; col++) {
            printf("%d ", garden[row][col]);
        }
        printf("%d\n", garden[row][y - 1]);
    }
}