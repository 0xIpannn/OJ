#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    for (int i = 0; i <= num; i++) {
        for (int j = i; j <= num; j++) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}