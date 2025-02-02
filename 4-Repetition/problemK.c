#include <stdio.h>

void drawTriangle(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi; j++) {
            if (j <= (tinggi - i)) {
                printf(" ");
            } else {
                if ((i + j) % 2 == 0) {
                    printf("*");
                } else {
                    printf("#");
                }
            }
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

        printf("Case #%d:\n", i + 1);
        drawTriangle(tinggi);
    }
}