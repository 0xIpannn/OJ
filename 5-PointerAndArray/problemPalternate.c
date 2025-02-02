#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int room[n][n];
    int incomplete = 0;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            scanf("%d", &room[r][c]);
        }
    }

    for (int i = 1; i <= n; i++) {
        int count = 0;
        for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (room[r][c] == i) count++;
        }
        }
        if (count != n) incomplete++;
    }

    printf("%d\n", incomplete);
}