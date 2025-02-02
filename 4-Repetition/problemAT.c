#include <stdio.h>

void drawTriangle(int t) {
    for (int i = 1; i <= t; i++) {
        for (int j = 1; j <= t - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int tinggi;
        scanf("%d", &tinggi);
        drawTriangle(tinggi);
    }
}