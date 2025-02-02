#include <stdio.h>

int main() {
    int process, num = 1;

    scanf("%d", &process);

    for (int i = 0; i < process; i++) {num = num * 2 + 1;}

    printf("%d\n", num);
}