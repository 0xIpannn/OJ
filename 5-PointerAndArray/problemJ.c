#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char str[1001];
        scanf("%s", str);
        int s = strlen(str);

        printf("Case %d: ", i + 1);
        for (int j = 0; j < s; j++) {
            if (j == s - 1) {
                printf("%d\n", str[j]);
            } else {
                printf("%d-", str[j]);
            }
        }
    }
}