#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char str[1001];
        scanf("%s", str);
        int s = strlen(str);

        printf("Case #%d : ", i + 1);
        for (int j = s - 1; j >= 0; j--) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}