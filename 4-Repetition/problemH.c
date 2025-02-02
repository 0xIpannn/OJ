#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("*");
        }
        printf("\n");
    }
}