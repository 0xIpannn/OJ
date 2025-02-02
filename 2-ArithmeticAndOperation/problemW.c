#include <stdio.h>

int main() {
    unsigned int input;
    unsigned int output[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &input); getchar();
        output[i] = (input / 10) % 10;
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", output[i]);
    }
}