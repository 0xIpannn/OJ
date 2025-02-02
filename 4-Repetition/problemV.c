#include <stdio.h>

int drawSquare(int sisi) {
    for (int i = 1; i <= sisi; i++) {
        for (int j = 1; j <= sisi; j++) {
            if (i == 1 || i == sisi || j == 1 || j == sisi || i == j || (i + j) == (sisi + 1)) {
                printf("*");
            } else {
                printf(" ");
            }

            if (j == sisi) printf("\n");
        }
    }

    printf("\n");
}

int main() {
    int testCase, s;

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        scanf("%d", &s);
        drawSquare(s);
    }
}