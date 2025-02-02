#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int num;
        scanf("%d", &num);

        printf("Case #%d: ", i + 1);
        for (int j = 1; j <= num; j++) {
            printf("%c", 96 + j);
        }
        printf("\n");
    }
}