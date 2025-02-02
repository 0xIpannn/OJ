#include <stdio.h>

int drawTriangle(int t) {
    for (int i = 1; i <= t; i++) {
        for (int j = 1; j <= t - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int r, t;
    scanf("%d %d", &r, &t);

    for (int i = 0; i < r; i++) {
        drawTriangle(t);
    }
}